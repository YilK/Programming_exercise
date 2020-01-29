#include <stdio.h>//score 20  注意处理无找零的输出模式 
#include <iostream>
using namespace std;
int main()
{
	int ga,sa,ka;
	int gb,sb,kb;
	int alla,allb;
	scanf("%d.%d.%d %d.%d.%d",&ga,&sa,&ka ,&gb,&sb,&kb);
//	cout<<ga<<sa<<ka<<gb<<sb<<kb;
	alla=ga*17*29+sa*29+ka;
	allb=gb*17*29+sb*29+kb;
	int sum=allb-alla;
	int a,b,c; 
	if(sum>=0)//钱足够 
	{
		a=sum/17/29;
		b=(sum-(a*17*29))/29;
		c=sum-a*17*29-b*29;
		cout<<a<<'.'<<b<<'.'<<c;
	}
	else
	{
		sum=-sum;
		a=sum/17/29;
		b=(sum-(a*17*29))/29;
		c=sum-a*17*29-b*29;
		cout<<'-'<<a<<'.'<<b<<'.'<<c;
	}
	return 0;
 } 
