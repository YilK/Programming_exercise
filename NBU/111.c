#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,j=0;
	double num,sum=0;
	for(i=1;i<=n;i++)
	{
		scanf("%lf",&num);
		sum=sum+num;
		if(num<60)
			j++;
	}
	printf("%.1lf\n",sum/n );
	printf("%d\n",j );
	return 0;
}