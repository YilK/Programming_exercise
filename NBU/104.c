#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int all=1;
	for(i=1;i<=n;i++)
	{
		all=all*i;
	}
	printf("%d\n",all );
	return 0;
}