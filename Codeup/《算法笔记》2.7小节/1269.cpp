#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	int *q=&a,*p=&b;
	if(*q<*p)
	{
		int *z=&a;
		q=&b;
		p=z;
		
	}
	cout<<*q<<' '<<*p<<endl;
	return 0;
}
