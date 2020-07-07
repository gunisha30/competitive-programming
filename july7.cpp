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
