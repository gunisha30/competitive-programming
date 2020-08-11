#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> a={5,17,100,11};
    int b=28,i,j,n=a.size(),sum=0;

    vector <int> arr(b,0);
    for(i=0;i<n;i++)
    {
        arr[a[i]%b]++;
    }
    //element at 0th index
    sum=sum+(arr[0]*arr[0]-1)/2;
    //count pairs
    for(i=1;i<=b/2 && i!= (b-i);i++)
    sum=sum+(arr[i]*arr[b-i]);
    //if b is even
    if(b%2==0)
    sum=sum+(arr[b/2]*(arr[b/2]-1))/2;
    cout<<sum;
    return 0;
}








