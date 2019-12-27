#include <stdio.h>
int main()
{
	int x,b;
	scanf("%d",&x);
	if(x%10==0)
		x=x/10;
	while(x>0)
	{
		b=x%10;
		printf("%d",b );
		x=x/10;
	}
	return 0;
}