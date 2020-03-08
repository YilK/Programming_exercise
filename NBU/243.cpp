#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a=0;
	int b=0;
	int c=0;
	a=n/10;
	n=n%10;
	b=n/5;
	n=n%5;
	c=n;
	cout<<a<<' '<<b<<' '<<c<<endl;
	return 0; 
	
} 
