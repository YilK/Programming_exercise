#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	int num;
	int a[10]={0};
	for(int i=0;i<10;i++)
	{
		cin>>a[i];//�������ÿ�����ĸ��� 
	}
	for(int i=1;i<10;i++)//�����һ���� 
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
/*�ؼ����Ǵ����һ����������� 
