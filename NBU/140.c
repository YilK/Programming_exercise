#include <stdio.h>
int main()
{
	int n;
	int i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==j)
				printf("1 ");
			else
				printf("0 ");
		}
		printf("\n");
	}
	return 0;
}