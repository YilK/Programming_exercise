#include <stdio.h>
int main()
{
	int n,m;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&m);
		printf("%d\n",2*m*m-m+1);
	}
	return 0;
}
