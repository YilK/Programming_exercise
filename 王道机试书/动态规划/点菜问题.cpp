#include <iostream>
using namespace std;
int w[1001];//���� 
int v[1001];//��ֵ
int dp[1001][1001]; 
int main()
{
	int m,n;//��ֵ������
	cin>>m>>n;
	for(int i=1;i<=n;i++)//�±�Ϊ������ 
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
