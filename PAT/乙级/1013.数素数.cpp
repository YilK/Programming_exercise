#include <iostream>
#include <vector>
#include <cmath> 
using namespace std;
int judge(int n)//�ж��Ƿ������� 
{
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0)
			return 0; 
	return 1;
}
int main()
{
	int m,n;//���뷶Χ 
	int count=0;//������ 
	int num=0;//���п����� 
	vector<int> v;//���ö�̬���� 
	cin>>m>>n;
	for(int i=2;count<=n;i++)//�����������̬������ 
	{
		if(judge(i)==1)
		{
			count++;
			v.push_back(i);
		}
	}
	for(int i=m-1;i<=n-1;i++)//�����Χ�ڵ����� 
	{
			num++;
			if(num%10==0)
			{
				cout<<v[i]<<endl;
			}
			else
			{
				if(i==n-1)//ע��:���һ�е����һ�����ֺ��治�ܼ��Ͽո� 
					cout<<v[i];
				else
					cout<<v[i]<<' '; 
			}
				
	} 
	return 0;
} 
