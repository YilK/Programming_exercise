#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	if((a*a+b*b)>100)
		printf("out");
	else if((a*a+b*b)==100)
		printf("on");
	else
		printf("in");
	return 0;
}