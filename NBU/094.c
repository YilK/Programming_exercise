#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,sum=0;
	for(i=1;i<=n;i++)
	{
		sum=sum+pow(i,2);
	}
	printf("%d\n",sum);
	return 0;
}