#include <stdio.h> 
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;n!=1;i++)
	{
		if(n%2==0)
		{
			n=n/2;
		}
		else
		{
			n=(n*3+1)/2;
		}
	}
	printf("%d\n",i);
	return 0;
}
