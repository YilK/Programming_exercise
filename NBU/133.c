#include <stdio.h>
#include <math.h>
int main()
{
	int k1,k2;
	scanf("%d %d",&k1,&k2);
	int i,a,b,num;
	for(i=k1;i<=k2;i++)
	{
		a=i/100;
		b=i%100;
		// printf("%d %d\n",a,b);
		num=(a+b)*(a+b);
		// printf("%d\n",num );
		if(num==i)
			printf("%d\n",i );
	}
	return 0;
}