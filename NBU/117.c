#include <stdio.h>
#include <math.h>
int main()
{
	double N;
	scanf("%lf",&N);
	int i=0;
	double a;
	while(1)
	{	
		a=pow((1.01),i);
		if(45*a>=N)
			break;
		else
			i++;
	}
	printf("%d\n",1980+i );
	return 0;
}