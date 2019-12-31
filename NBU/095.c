#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,sum=0;
	for(i=1;i<=n;i++)
	{
		sum=sum+(i*(i+1));
	}
	printf("%d\n",sum );
	return 0;
}