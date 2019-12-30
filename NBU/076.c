#include <stdio.h>
int main()
{
	int num;
	int a,b,c,d,temp;
	scanf("%d",&num);
	//先计算出每一位的数字
	a=num%10;//个位上的数字
	b=num%100/10;//十位上的数字
	c=num%1000/100;//百位上的数字
	d=num/1000;//千位上的数字
	a=(a+9)%10;
	b=(b+9)%10;
	c=(c+9)%10;
	d=(d+9)%10;
	//交换
	temp=a;
	a=c;
	c=temp;
	temp=b;
	b=d;
	d=temp;
	num=a+b*10+c*100+d*1000;
	printf("%d%d%d%d\n",d,c,b,a);
	return 0;
}