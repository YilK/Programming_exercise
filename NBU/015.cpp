#include <stdio.h>
int main()
{
	int x,y,temp;
	scanf("%d %d",&x,&y);
	printf("%d %d\n",x,y);
	temp=x;//进行值的交换
	x=y;
	y=temp;
	printf("%d %d\n",x,y);
	return 0;
}