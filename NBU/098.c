#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	double sum=0;
	for(i=1;i<=n;i++)
	{
		sum=sum+1.0/i;
	}
	printf("%.6lf\n",sum );
	return 0;
}