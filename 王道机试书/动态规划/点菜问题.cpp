#include <iostream>
using namespace std;
int w[1001];//重量 
int v[1001];//价值
int dp[1001][1001]; 
int main()
{
	int m,n;//价值，种类
	cin>>m>>n;
	for(int i=1;i<=n;i++)//下标为零特殊 
		cin>>w[i]>>v[i];
	w[0]=0;
	v[0]=0;
	for(int i=1;i<=n;i++) 
	{
		for(int j=1;j<=m;j++)
		{
			if(i==0||j==0)
			{
				dp[i][j]=0;
				continue;
			}
			if(j<w[i])
			{
				dp[i][j]=dp[i-1][j];
			}
			else
			{
				dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+v[i]);
			}
		}
	}
	cout<<dp[n][m]<<endl;
	return 0;
} 
