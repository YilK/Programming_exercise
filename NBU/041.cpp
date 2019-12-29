#include <stdio.h>
int main()
{
	double x;
	scanf("%lf",&x);
	if(x<1)
		printf("%lf\n",x );
	else if(x<10)
		printf("%lf\n",3*x-1 );
	else
		printf("%lf\n",4*x-2);
	return 0;
}