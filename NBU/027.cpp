#include <stdio.h>
#include <math.h>
int main()
{
	double money,year,rate;
	double interset;
	scanf("%lf %lf %lf",&money,&year,&rate);
	printf("%0.2lf\n",money*pow((1+rate),year)-money);
	return 0;
}