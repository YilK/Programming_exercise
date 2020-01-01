#include <stdio.h>
int main()
{
	int n,x,sum=0,i=1;
	while(scanf("%d",&n)!=EOF)
	{
		while(i<=n)
		{
			scanf("%d",&x);
			sum=sum+x;
			i++;
		}
	printf("%d\n",sum);
	i=1,sum=0;
	}
	return 0;
}