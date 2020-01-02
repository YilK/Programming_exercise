#include <stdio.h>
#include <math.h>
int main()
{
	int flag=0;
	int n;
	scanf("%d",&n);
	int i;
	int a,b,c;
	for(i=100;i<n;i++)
	{
		a=i/100;//百位上的数字
		b=i%100/10;//十位上的数字
		c=i%100%10;//个位上的数字
		if(a*a*a+b*b*b+c*c*c==i)
		{
			flag=1;
			printf("%d\n",i );
		}

	}
	if(flag==0)
		printf("No Answer\n");
	return 0;
}