#include <stdio.h>
int main()
{
	int sum=0,a;
	int i;
	for(i=1;i<=10;i++)
	{
		scanf("%d",&a);
		sum=sum+a;
	}
	printf("%d\n",sum );
	return 0;
}
int sum(int a[],int n)
{
	int i,result=0;
	for(i=0;i<n;i++)
		result=result+a[i];
	return result;
}