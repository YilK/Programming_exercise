#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i=1;
	for(i;i<n;i++)
	{
		if(i%5==0&&i%7==0)
			printf("%d ",i );
	}
	printf("\n");
	return 0;
}