#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	double number=0;
	scanf("%d",&n);
	for(int i =1;i<=64;i++)
		number=number+pow(2,i-1);
	printf("%lf\n",number);
	return 0;
}