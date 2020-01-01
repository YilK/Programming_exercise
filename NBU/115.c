#include <stdio.h>
#include <math.h>
int main()
{
	double i=1;
	double m=0;
	double N,s;
	scanf("%lf",&N);
	while((pow(2,i+1)-2)<N)
	{
		m=m+pow(2,i);
		s=0.4*m/i;
		i++;
	}
	printf("%.2lf\n",s );
	return 0;
}