#include <stdio.h>
#include <math.h>
int main()
{
	double money,rate;
	double interset;
	scanf("%lf %lf",&rate,&money);
	printf("%0.2lf\n",money*(1+rate));
	return 0;
}