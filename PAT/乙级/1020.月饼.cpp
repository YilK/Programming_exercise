#include <iostream>
#include <stdio.h>
#include <algorithm> 
using namespace std;
struct mooncake{
	double store;//库存量
	double all_price;//总价
	double price;//单价 
};
bool cmp(mooncake a,mooncake b)
{
	return a.price>b.price;
}
int main()
{
	int n;//种类数
	double m;//需求量
	cin>>n>>m;
	double sum; 
	mooncake cake[n];
	for(int i=0;i<n;i++)//输入库存量 
	{
		cin>>cake[i].store;
	}
	for(int i=0;i<n;i++)//输入总售价 
	{
		cin>>cake[i].all_price;
	}
	for(int i=0;i<n;i++)//计算出单价 
	{
		cake[i].price=cake[i].all_price/cake[i].store;
	}
	sort(cake,cake+n,cmp);//按单价的大小从大到小排序好
	for(int i=0;i<n;i++)
	{
		if(m>cake[i].store)
		{
			sum=sum+cake[i].all_price;
			m=m-cake[i].store;
		}
		else
		{
			sum=sum+m*cake[i].price;
			break;
		}
	}
	printf("%.2lf",sum);
	 
	return 0;
 } 
 /*思路计算出单价，然后排序。再根据数量进行计算 
