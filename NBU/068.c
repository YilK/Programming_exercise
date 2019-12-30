#include <stdio.h>
int main()
{
	double num;
	scanf("%lf",&num);
	if(num>=30)
		printf("%.2lf\n",48*num);
	else
		printf("%.2lf\n",50*num);
	return 0;
}