#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int j;
	int i=1;
	double sum=0;
	double a=2,b=1,c;
	for(j=1;j<=n;j++)
	{
		sum=sum+a/b;
		c=a;
		a=a+b;
		b=c;
	}
	printf("%.6lf\n",sum );
	return 0;
}