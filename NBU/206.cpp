#include <stdio.h>
int main()
{
	double amount;
	scanf("%lf",&amount);
	if(amount<7)
	{
		printf("%.2lf\n",1.2*amount);
	}
	else
		printf("%.2lf\n",1.9*amount);
	return 0;
}
