#include <iostream>
using namespace std;
int main()
{
	double s;//距离
	double v;//速度
	double x;//每公升汽油可以行驶的公里数
	double price;//每公升汽油的价格
	cin>>s>>v>>x>>price;
	printf("%.1lf %.1f\n",s/v,s/x*price);
	return 0; 
} 
