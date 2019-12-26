#define P 3.14
#include <stdio.h>
int main()
{
	double r;
	double L,S;//圆周长与面积
	scanf("%lf",&r);
	L=2*P*r;
	S=P*r*r;
	printf("%.2lf,%.2lf",L,S);
	return 0;
}