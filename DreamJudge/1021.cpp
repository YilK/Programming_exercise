#include <iostream>
using namespace std;
int main()
{
	double a1,b1,a2,b2;
	char c;
	cin>>a1>>b1>>a2>>b2>>c;
	double a,b;
	if(c=='+')
	{
		a=a1+a2;
		b=b1+b2;
	}
	else
	{
		a=a1*a2-b1*b2;
		b=a1*b2+a2*b1;
	}
	printf("%.1lf %.1lf\n",a,b);
	return 0;
}
