#include <stdio.h>
int main()
{
	double amount;
	scanf("%lf",&amount);
	if(amount>=5000)
		printf("%.2lf\n",amount*0.8 );
	else if(amount>=3000)
		printf("%.2lf\n",amount*0.85 );
	else if(amount>=1000)
		printf("%.2lf\n",amount*0.9 );
	else if(amount>=500)
		printf("%.2lf\n",amount*0.95 );
	else
		printf("%.2lf\n",amount );
	return 0;
}