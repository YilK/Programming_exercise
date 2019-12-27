#include <stdio.h>
#include <math.h>
int main()
{
	double x,y;
	scanf("%lf",&x);
	y=3*pow(x,4)-2*pow(x,3)-pow(x,2)+10;
	printf("%.1lf\n",y );
	return 0;
}