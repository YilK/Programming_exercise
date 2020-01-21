#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	double v,s;
	cin>>v>>s;
	v=v/3.6;
	printf("%.2lf",v*v/(2*s));
	return 0;
}
