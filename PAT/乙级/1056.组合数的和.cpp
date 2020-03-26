#include <iostream>
using namespace std;
int a[11];
int main()
{
	int n;
	cin>>n;
	int i;
	int sum=0;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(j==i)
				continue;
			else{
				sum=sum+(a[i]*10+a[j]);
			}
		}
	}
	cout<<sum<<endl;
	return 0;
}