#include <iostream>
using namespace std;
int main()
{
	int a,b;
	while(cin>>a>>b)
	{
		int a1=0,b1=0;
		while(a!=0)
		{
			a1=a1*10+a%10;
			a=a/10;
		}
		while(b!=0)
		{
			b1=b1*10+b%10;
			b=b/10;
		}
		cout<<a1+b1<<endl;
	}
	return 0;
}
