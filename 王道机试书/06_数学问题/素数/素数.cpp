#include <iostream>
#include <cmath> 
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+1]={0};
	for(int i=2;i<=sqrt(n);i++)
	{
		if(a[i]==0)
		{
			for(int j=i*i;j<=n;j=j+i)
			{
				a[j]=1;
			}
		}
	}
	for(int i=2;i<=n;i++)
	{
		if(a[i]==0)
			if(i%10==1)
				cout<<i<<' ';
	}
	return 0;
}
