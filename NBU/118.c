#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	scanf("%d",&n);
	double sum=100;
	double n_sum;
	int i;
	for(i=2;i<=n;i++)
	{
		sum=sum+(100/pow(2,i-1))*2;
	}
	printf("%.6lf %.6lf\n",sum,100/(pow(2,n)));
	return 0;
}