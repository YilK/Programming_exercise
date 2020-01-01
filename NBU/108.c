#include <stdio.h>
int main()
{
	int a,i=0;
	double sum=0;
	while(scanf("%d",&a)!=EOF)
	{
		sum=sum+a;
		i++;
	}
	printf("%.2lf\n",sum/i );
	return 0;
}