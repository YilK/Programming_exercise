#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
int main()
{
	string a;
	string b;
	cin>>a;
	cin>>b;
	int c=a.compare(b);
//	printf("%d",c);
	if(c<0)
	{
		cout<<a<<endl<<b<<endl;
	}
	else
		cout<<b<<endl<<a<<endl;
	return 0;
}
