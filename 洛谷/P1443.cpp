#include <iostream>
#include <queue>
#include <string>
#include <iomanip>
using namespace std;
int mp[410][410];
struct node {
	int x,y,s;
};
int xx[]={2,2,1,1,-1,-1,-2,-2};
int yy[]={1,-1,2,-2,2,-2,1,-1};
int main()
{
		int n,m,sx,sy;
		cin>>n>>m>>sx>>sy;
		queue<node> q;
		node t;
		t.x=sx;t.y=sy;
		t.s=0;
		q.push(t);
		int i,j;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=m;j++)
				mp[i][j]=-1;
		}
		mp[sx][sy]=0;
		while(!q.empty())
		{
			for(i=0;i<8;i++)
			{
				int dx=xx[i]+q.front().x;
				int dy=yy[i]+q.front().y;
				if(dx>=1&&dx<=n&&dy>=1&&dy<=m&&mp[dx][dy]==-1)
				{
					mp[dx][dy]=q.front().s+1;
					t.x=dx;
					t.y=dy;
					t.s=q.front().s+1;
					q.push(t);
					
				}
			}
			q.pop();	
		}
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=m;j++)
				cout<<left<<setw(5)<<mp[i][j];
			cout<<endl;
		}
		return 0;
}
