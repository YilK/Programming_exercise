#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	for(;a<=b;a=a+10)
	{
		printf("%d %.2lf\n",a,a*0.3937);
	}
	return 0;
}
