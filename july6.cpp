#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool solve(string s)
{
    int i,l=s.length();
    stack <char> st;
    for(i=0;i<l;i++)
    {
    char c=s[i];
    if(c=='{' || c=='[' || c=='(')
    st.push(c);
    
    else
    {
        if(st.empty())
        return false;
        
        else if(st.top()==(c-1) || st.top()==(c-2))
        st.pop();
    }
    }
    if(st.size()>0)
    return false;
    
    return true;
}
int main()
{
    string s;
    cin>>s;
    bool a=solve(s);
    if(a)
    cout<<"yes";
    else
    cout<<"no";

    return 0;
}

