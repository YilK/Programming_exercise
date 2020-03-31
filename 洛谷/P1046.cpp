#include <iostream>
using namespace std;
int main()
{
	int a[10];
	int n;
	int i;
	for(i=0;i<=9;i++)
		cin>>a[i];
	cin>>n;
	int sum=0;
	for(i=0;i<10;i++)
	{
		if(a[i]<=n+30)
			sum++;
	}
	cout<<sum;
	return 0;
} 
