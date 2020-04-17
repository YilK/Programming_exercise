#include <iostream>
#include <queue>
using namespace std;
int main()
{
	queue<int> q;
	int n;
	cin>>n;
	int i;
	for(i=1;i<=n;i++)
	{
		q.push(i);
	}
	while(q.size()>1)
	{
		for(i=1;i<=2;i++)
		{
			int num=q.front();
			q.pop();
			q.push(num);
		}
		q.pop();
	}
	cout<<q.front()<<endl;
	return 0;
}
