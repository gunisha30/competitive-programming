#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> a={1,2,2,3,4,4,5,6,6,7};
    int i,f,n=a.size();
    for(i=0;i<n-1;i++)
    {
        if(a[i+1]-a[i]!=0)
        cout<<a[i]<<" ";
    }
    cout<<a[n-1];
    return 0;
}
