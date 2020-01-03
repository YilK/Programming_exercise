#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	if((a*a+b*b)>100)
		printf("out\n");
	else if((a*a+b*b)==100)
		printf("on\n");
	else
		printf("in\n");
	return 0;
}