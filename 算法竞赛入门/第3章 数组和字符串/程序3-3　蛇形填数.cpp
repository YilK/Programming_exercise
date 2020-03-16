#include <iostream>
using namespace std;
int a[20][20]={{0}};
int main()
{
	int n,x,y,tot=0;
	cin>>n;
	x=0;y=n-1;
	tot=1;
	a[x][y]=1;//给第一个元素赋值
	while(tot<n*n)
	{
		while(x+1<n&&!a[x+1][y]) a[++x][y]=++tot;
		while(y-1>=0&&!a[x][y-1]) a[x][--y]=++tot;
		while(x-1>=0&&!a[x-1][y]) a[--x][y]=++tot;
		while(y+1<n&&!a[x][y+1]) a[x][++y]=++tot; 
	}
	for(x=0;x<n;x++)
	{
		for(y=0;y<n;y++)
			printf("%3d",a[x][y]);
		cout<<endl;
	}
	return 0;
}
