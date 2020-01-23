#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;//输入数据 
	int a,b,c; 
	//计算个、十、百位上的数字 
	a=n/100;
	b=n%100/10;
	c=n%10;
	//输出 
	for(int i=1;i<=a;i++)
		cout<<'B';
	for(int i=1;i<=b;i++)
		cout<<'S';
	for(int i=1;i<=c;i++)
		cout<<i;
	return 0;
} 
