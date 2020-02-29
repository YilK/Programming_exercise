#include <iostream>
using namespace std;
int dp[10001];
int a[10001];
int max(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}
int main()
{
	int n;
	cin>>n;
	
	for(int k=0;k<n;k++)
	{
		cin>>a[k];	
	}
	int answer=0;
	for(int i=0;i<n;i++)
	{
		dp[i]=a[i];
		for(int j=0;j<i;j++)
		{
			if(a[j]<a[i])
			{
				dp[i]=max(dp[i],dp[j]+a[i]);
			}
		}
		answer=max(answer,dp[i]);
	}
	cout<<answer<<endl;
	return 0;
}