#include <iostream>
#include <string>
using namespace std;
int main()
{
	int i;
	int n;
	cin>>n;
	int flag=0;
	for(i=10000;i<=30000;i++)
	{
		int a,b,c;
		a=i/100;
		b=i/10%1000;
		c=i%1000;
//		cout<<i<<' '; 
//		cout<<a<<' '<<b<<' '<<c<<endl;
		if(a%n==0&&b%n==0&&c%n==0)
		{	
			cout<<i<<endl;
			flag=1;
		}
	}
	if(flag==0)
		cout<<"No";
	return 0;
} 
