#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,c;
	scanf("%lf %lf %lf",&a,&b,&c);
	double x1,x2;
	if(b*b-4*a*c==0)
	{
		x1=(-b+sqrt(b*b-4*a*c))/(2*a);
		printf("%.2lf\n",x1 );
	}
	else
	{
		x1=(-b+sqrt(b*b-4*a*c))/(2*a);
		x2=(-b-sqrt(b*b-4*a*c))/(2*a);
		printf("%.2lf %.2lf\n",x1,x2);
	}
	return 0;
}