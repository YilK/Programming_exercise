#include <iostream>
#include <queue>
using namespace std;
struct node{
	int tag;
	int stp;
};
int main()
{
	int n,a,b,e[210],vis[210]={0};//vis标记为是否访问过 
	cin>>n>>a>>b;
	int i;
	for(i=1;i<=n;i++)
		cin>>e[i];//步数 
	node temp;
	queue<node> q;
	temp.tag=a;//第一个点 
	temp.stp=0;
	vis[a]={1}; 
	q.push(temp);
	while(!q.empty())
	{
		temp=q.front();
		if(temp.tag==b)
		{
			cout<<temp.stp<<endl;
			return 0;
		}
		q.pop();
		node t;
		if(temp.tag+e[temp.tag]<=n&&vis[temp.tag+e[temp.tag]]==0)//现在的楼数+可移动的楼数 要小于最高楼 
		{
			t.tag=temp.tag+e[temp.tag];
			t.stp=temp.stp+1;
			vis[temp.tag+e[temp.tag]]=1;
			q.push(t);
		}
		if(temp.tag-e[temp.tag]>=1&&vis[temp.tag-e[temp.tag]]==0)//现在的楼数-可移动的楼数 要大于1楼 
		{
			t.tag=temp.tag-e[temp.tag];
			t.stp=temp.stp+1;
			vis[temp.tag-e[temp.tag]]=1;
			q.push(t);
		} 
	}
	cout<<-1<<endl;
	return 0; 
}
