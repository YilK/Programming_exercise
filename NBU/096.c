#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,j=0,sum=0;
	for(i=1;i<=n;i++){
		j=i*i*i;
		sum=sum+j;
	}
	printf("%d\n",sum);
	return 0;
}