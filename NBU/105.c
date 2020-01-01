#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,j;
	int sum=0,all=1;
	for(i=1;i<=n;i++)
	{	
		all=1;
		for(j=1;j<=i;j++)
		{
			all=all*j;
		}
		sum=sum+all;
	}
	printf("%d\n",sum );
	return 0;
}