#include <stdio.h>
int main()
{
	double a[4],sum=0;
	int i;
	for(i=0;i<4;i++)
		scanf("%lf",&a[i]);
	for(i=0;i<4;i++)
		sum=sum+a[i];
	printf("%.1lf\n",sum/4 );
	return 0;
}