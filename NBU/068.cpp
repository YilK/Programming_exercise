#include <stdio.h>
int main()
{
	double speed;
	scanf("%lf",&speed);
	if(speed>=16.67)
		printf("3\n");
	else if(speed>=11.19)
		printf("2\n");
	else
		printf("1\n");
	return 0;
}