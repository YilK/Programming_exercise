#include <stdio.h>
int main()
{
	int a[10];
	int i;
	for(i=0;i<=9;i++)
		scanf("%d",&a[i]);
	for(i=9;i>=0;i--)
	{
		if(i==0)
			printf("%d\n",a[i]);
		else
			printf("%d ",a[i]);
	}
	return 0;
}