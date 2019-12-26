#include <stdio.h>
int main()
{
	double a,b;
	int c;
	scanf("%lf",&a);
	c=int(a);//强制类型转换
	b=a-c;
	printf("%.2lf %d",a,c);
	return 0;
}