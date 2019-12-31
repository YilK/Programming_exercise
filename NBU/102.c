#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	double sum=1;
	double x;
	double i,j;
	for(j=1;j<=n;j++)
	{
		x=1;
		for(i=1;i<=j;i++)
			x=x*i;
		sum=sum+1/x;
	}
	printf("%.6lf\n",sum );
	return 0;

}