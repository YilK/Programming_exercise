#include <iostream>
using namespace std;
int judge(int x)
{
	for(int i=2;i*i<=x;i++)
		if(x%i==0)	return -1;
	return 1;
}
int main()
{
	int n;
	cin>>n;
	int i;
	for(i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			if(judge(i)==1&&judge(n/i)==1)
			{
				cout<<n/i;
				break;
			}
		}
	}
	return 0;
}
