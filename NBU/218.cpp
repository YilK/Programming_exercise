#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	double a;
	char num;
	cin>>a>>num;
	if(num=='s')
		printf("%.2lf\n",a*a);
	else
		printf("%.2lf\n",3.14*a*a);
	return 0;
} 
