#include <stdio.h>
int main()
{
	int x,a;
	scanf("%d",&x);
	while(x>0)
	{
		a=x%10;
		x=x/10;
	}
	printf("%d\n",a );

}