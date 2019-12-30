#include <stdio.h>
int main()
{
	int x,y,z;
	scanf("%d %d %d",&x,&y,&z);
	int temp=x;//记录最大值
	if(temp<y)
		temp=y;
	if(temp<z)
		temp=z;
	printf("%d\n",temp );
	return 0;
}