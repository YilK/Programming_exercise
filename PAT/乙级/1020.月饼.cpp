#include <iostream>
#include <stdio.h>
#include <algorithm> 
using namespace std;
struct mooncake{
	double store;//�����
	double all_price;//�ܼ�
	double price;//���� 
};
bool cmp(mooncake a,mooncake b)
{
	return a.price>b.price;
}
int main()
{
	int n;//������
	double m;//������
	cin>>n>>m;
	double sum; 
	mooncake cake[n];
	for(int i=0;i<n;i++)//�������� 
	{
		cin>>cake[i].store;
	}
	for(int i=0;i<n;i++)//�������ۼ� 
	{
		cin>>cake[i].all_price;
	}
	for(int i=0;i<n;i++)//��������� 
	{
		cake[i].price=cake[i].all_price/cake[i].store;
	}
	sort(cake,cake+n,cmp);//�����۵Ĵ�С�Ӵ�С�����
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
 /*˼·��������ۣ�Ȼ�������ٸ����������м��� 
