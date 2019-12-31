#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i=1,j;
	double sum=0;
	for(j=1;j<=n;j++)
	{
		sum=sum+1.0/i;
		i=i+2;
	}
	printf("%.2lf\n",sum);
	return 0;
}