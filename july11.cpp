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


int main()
{
    vector <int> a={0,1,0,2,1,0,1};
    int i,n=a.size(),min1=0;
    vector <int> left (n,0), right(n,0);
    for(i=1;i<n;i++)
    {
        min1=max(min1,a[i-1]);
        left[i]=min1;
    }
    min1=0;
    for(i=n-2;i>=0;i--)
    {
        min1=max(min1,a[i+1]);
        right[i]=min1;
    }
    int ct=0;
    for(i=0;i<n;i++)
    {
        if(min(left[i],right[i])>a[i])
        ct=ct+(min(left[i],right[i])-a[i]);
    }
    cout<<ct;
    for(i=1;i<n;i++)
    cout<<left[i];
    cout<<endl;
    for(i=1;i<n;i++)
    cout<<right[i];
    return 0;
}
