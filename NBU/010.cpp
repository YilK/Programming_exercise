#define P 3.14
#include <stdio.h>
int main()
{
	double r;
	scanf("%lf",&r);
	printf("%.2lf\n",(4.0/3)*P*r*r*r );
	return 0;
}