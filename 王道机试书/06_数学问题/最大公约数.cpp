#include <iostream>
using namespace std;
int gcd(int a,int b)
{
	int c=b;
	while(a%b!=0)
	{
		c=a%b;
		a=b;
		b=c;
	}
	return c; 
}
int main()
{
	int a,b,c;
	cin>>a>>b;
	c=gcd(a,b);
	cout<<c;
	return 0;
}
