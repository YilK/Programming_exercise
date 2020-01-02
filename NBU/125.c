#include <stdio.h>
int main()
{
	int n,i=1;
	double a=1,b=1;
	scanf("%d",&n);
	if(n==1)
		printf("1");
	else if(n==2)
		printf("1 1");
	else
	{
		printf("1 1");
		for(i=3;i<=n;i++)
		{
			b=a+b;
			a=b-a;
			printf(" %.f",b );
		}
	}
	printf("\n");
	return 0;
}

