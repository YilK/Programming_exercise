#include <stdio.h>
#include <math.h>
int main()
{
	double x,y;
	scanf("%lf",&x);
	if(x<0)
		y=pow(x+1,2)+2*x+1/x;
	else
		y=sqrt(x);
	printf("%.2lf\n",y);
	return 0;
}