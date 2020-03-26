#include <iostream>
using namespace std;
int a[10001]={0};
int jud(int x)
{
	for(int i=2;i*i<=x;i++)
		if(x%i==0)
			return -1;
	return 1;
}
int main()
{
	int n,m;
	cin>>n;
	int id;
	int i;
	for(i=1;i<=n;i++)
	{
		cin>>id;
		a[id]=i;
	}
	cin>>m;
	for(i=1;i<=m;i++)
	{
		cin>>id;
		if(a[id]==1)
		{
			printf("%04d: Mystery Award\n",id);
			a[id]=-1;
		}
		else if(a[id]==0)
			printf("%04d: Are you kidding?\n",id);
		else if(a[id]==-1)
			printf("%04d: Checked\n",id);
		else if(jud(a[id])==1)
		{
			printf("%04d: Minion\n",id);
			a[id]=-1;
		}
		else
		{
			printf("%04d: Chocolate\n",id);
			a[id]=-1;
		}
	}
	return 0;
}