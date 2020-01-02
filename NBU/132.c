#include <stdio.h>
int measure(int x,int y)
{
	int z=y;
	while(x%y!=0)
	{
		z=x%y;
		x=y;
		y=z;
	}
	return z;
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int d,c;
	c=measure(a,b);//求出最大公约数
	d=a*b/c;
	printf("%d %d\n",c,d );
	return 0;
}