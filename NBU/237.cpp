#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
int main()
{
	double a,b,c,d,e;
	cin>>a>>b>>c>>d;
//	cout<<a-b<<' ';
	printf("%.2lf",a-b);
	e=pow(1+c/12,-d);
//	cout<<c/12*(a-b)/(1-e)<<endl;
	printf("%.2lf\n",c/12*(a-b)/(1-e));
	return 0;
}
