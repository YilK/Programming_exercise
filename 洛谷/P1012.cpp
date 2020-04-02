#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string a[10001];
	int i;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n-1;i++)
	{
		int max=i;
		for(int j=i+1;j<n;j++)
		{	
			if(a[j]+a[max]>a[max]+a[j])
				max=j;
		} 
		if(max!=i)
		{
			string temp=a[max];
			a[max]=a[i];
			a[i]=temp;
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
	return 0;
	
}
