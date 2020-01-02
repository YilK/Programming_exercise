#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int i,j;
	int sum;
	for(j=a;j<=b;j++){
		sum=0;
		for(i=1;i<j;i++)
		{
			if(j%i==0)
			{
				sum=sum+i;
			}
		}
		if(sum==j)
			printf("%d\n",j );
	}
	return 0;
}