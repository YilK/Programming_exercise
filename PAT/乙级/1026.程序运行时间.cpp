#include <stdio.h>
int main()
{
	int c1,c2;
	int num; 
	scanf("%d %d",&c1,&c2);
	num=(c2-c1+50)/100;
	int h;
	h=num/3600;
	c1=num%3600/60;
	c2=num%3600%60;
//	printf("%d",num);
	printf("%02d:%02d:%02d",h,c1,c2);
	return 0;
 } 
 //精髓
 /*题目要求不足1秒的时间四舍五入到秒，所以先给(b-a)加上50，
 这样如果(b-a)/100的小数位大于等于0.5则会进位，
 小于等于0.5则会舍去，所以n = ((b – a) + 50) / 100 
