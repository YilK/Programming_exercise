#include <stdio.h>
int main()
{
	int temp,x,y;
	scanf("%d %d",&x,&y);
	if(x>y)
	{
		temp=x;
		x=y;
		y=temp;
	}
	printf("%d %d\n",x,y );
	return 0;
}