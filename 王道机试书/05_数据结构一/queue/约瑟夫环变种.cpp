#include <iostream>
#include <queue>
using namespace std;
int main()
{
	int n,p,m;
	cin>>n>>p>>m;
	queue<int> q;
	for(int i=1;i<=n;i++)
		q.push(i);
	for(int i=1;i<p;i++)
	{
		q.push(q.front());
		q.pop();
	}
	while(!q.empty())
	{
		for(int i=1;i<m;i++)
		{
			q.push(q.front());
			q.pop();
		}
		if(q.size()==1)
			cout<<q.front();
		else
			cout<<q.front()<<',';
		q.pop();
	}
	return 0;
}
