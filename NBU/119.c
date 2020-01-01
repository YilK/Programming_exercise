#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
			if(i==j)
				printf("%d\n",i*j );
			else
				printf("%-4d",i*j);
	}
	return 0;
}