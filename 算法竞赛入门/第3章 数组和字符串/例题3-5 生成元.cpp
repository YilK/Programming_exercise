#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=n-45;i<n;i++)
	{
		int a=i;int b=i;
		while(b!=0)
		{
			a=a+(b%10);//加上每一位上的数字 
			b=b/10;
		} 
		if(a==n)
		{
			cout<<i<<endl;
			return 0; 
		} 
	} 
	cout<<0<<endl;
	return 0;
} 
