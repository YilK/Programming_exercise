#include <iostream>
using namespace std;
int main()
{
	int num[501][501]={{0}};
	int m,n;
	cin>>m>>n;
	int i,j;
	int a,b,c;
	cin>>a>>b>>c;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>num[i][j];
			if(num[i][j]>=a&&num[i][j]<=b)
				num[i][j]=c;
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j==n-1)
				printf("%03d",num[i][j]);
			else
				printf("%03d ",num[i][j]);
		}
		cout<<endl;
	}
	return 0;
}