Brute force:

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <vector <int>> a={{1,2,10}, {2,3,20}, {2,5,25}};
    int n=5;
    vector <int> out(n,0);
    for (int i=0;i<a.size();i++)
    {
        for (int j=a[i][0]-1;j<a[i][1];j++)
        {
            out[j]=out[j]+a[i][2];
        }
    }
    for (int j=0;j<out.size();j++)
        {
            cout<<out[j]<<" ";
        }
    
    return 0;
}

Optimized:

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <vector <int>> a={{1,2,10}, {2,3,20}, {2,5,25}};
    int n=5,x,y;
    vector <int> out(n,0);
    for (int i=0;i<a.size();i++)
    {
        x=a[i][0]-1;
        y=a[i][1]-1;
        out[x]=out[x]+ a[i][2];
        if(y!=(n-1))
        out[y+1]=out[y+1]-a[i][2];
    }
    int su=0;
    for (int j=0;j<out.size();j++)
        {
        su=su+out[j];
        out[j]=su;
        }
    
    for (int j=0;j<out.size();j++)
    cout<<out[j]<<" ";
    
    return 0;
}
