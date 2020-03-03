#include <iostream>
using namespace std;
int dp[1001][1001]={{0}};
int w[1001];
int v[1001];
int max(int a,int b)
{
	if(a>b)
		return a;
	else 
		return b;
}
int main()
{
	int t,m;
	cin>>t>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>w[i]>>v[i];
	}
	w[0]=0;
	v[0]=0;
	for(int k=1;k<=m;k++)
	{
		for(int j=1;j<=t;j++)
		{
			if(j<w[k])
				dp[k][j]=dp[k-1][j];
			else
				dp[k][j]=max(dp[k-1][j],dp[k-1][j-w[k]]+v[k]);
		}
	}
	cout<<dp[m][t]<<endl;
	return 0;
}