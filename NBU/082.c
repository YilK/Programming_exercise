#include <stdio.h>
#include <math.h>
int main()
{
	double a,b;
	scanf("%lf %lf",&a,&b);
	double s;
	s=sqrt((fabs(a)-2)*(fabs(a)-2)+(fabs(b)-2)*(fabs(b)-2));
	if(s<=0.5)
		printf("50\n");
	else
		printf("0\n");
	return 0;
}