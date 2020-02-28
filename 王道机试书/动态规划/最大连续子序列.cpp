#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[100001];
	int dp[100001];
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		if(i==1)
			dp[i]=a[i];
		else
			dp[i]=max(a[i],dp[i-1]+a[i]);
	}
	int max=-10000;
	int k=-1;
	for(int i=1;i<=n;i++)
	{
		if(max<dp[i])
		{
			max=dp[i];
			k=i;	
		}	
	} 
	cout<<max<<' ';
	for(int i=k;i>=1;i--)
	{
		if((max-a[i])==0)
		{
			cout<<a[i]<<' ';
			break;
		}
		else
			max=max-a[i]; 
	}
	cout<<a[k];
	return 0;
	
}

