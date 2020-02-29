#include <iostream>
#include <cstdio>
using namespace std;
int height[25];
int dp[25];
int max(int a,int b)
{
	if(a>=b)
		return a;
	else 
		return b;
}
int main()
{
	int n;
	cin>>n;
	for(int k=0;k<n;k++)
		cin>>height[k];
	int res=0;
	for(int i=0;i<n;i++)
	{
		dp[i]=1;
		for(int j=0;j<i;j++)
		{
			if(height[i]<=height[j])
			{
				dp[i]=max(dp[i],dp[j]+1);
			}

		}
		res=max(res,dp[i]);
	}
	cout<<res<<endl;
	return 0;
}
