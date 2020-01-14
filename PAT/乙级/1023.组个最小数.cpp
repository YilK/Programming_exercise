#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	int num;
	int a[10]={0};
	for(int i=0;i<10;i++)
	{
		cin>>a[i];//输入代表每个数的个数 
	}
	for(int i=1;i<10;i++)//输出第一个数 
	{
		if(a[i]!=0)
		{
			cout<<i;
			a[i]--;
			break;
		}
	}
	for(int i=0;i<10;i++)
	{
		if(a[i]!=0)
		{
			num=a[i];
			for(int j=1;j<=num;j++)
				cout<<i;
		}	
	} 
	return 0;
} 
/*关键还是处理第一个输出的数字 
