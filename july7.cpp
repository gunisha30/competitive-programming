//ques 1
priority_queue<int,vector<int>,greater<int>> pq;
vector <int> ar={1,2,3,4,5};
for (int i=0;i<ar.size();i++)
pq.push(a[i]); //nlogn: n times logn (heapify will be called)

while(pq.size()>1)
{
int first,sec,sum;
first=pq.top();
pq.pop();
sec=pq.top();
pq.pop();
sum=first+sec;
pq.push(sum);
}

//ques2

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a=, b=, prev=0, next=0, tank=b, ans=0, i;
  vector <int> c=
  vector <int> d=
  int n=c.size();
  
  priority_queue <int> q;
  for (i=0;i<n;i++)
  {
    loc=c[i] //current location is c[i]th stn
    if(a>c[i]) //not yet reached
    {
      tank = tank-(next-prev); //val of tank reduces because you have travelled further
      while(!q.empty() && tank<0)
      {
        tank= tank+q.top(); //filling tank with max fuel
        ans++;
        q.pop();
      }
      if (tank<0)
        return -1;
