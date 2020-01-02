#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int sum=0;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==n)
		printf("yes\n");
	else 
		printf("no\n");
	return 0;
}