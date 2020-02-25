#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct bean{
	double weight;
	double cost;
};
bool cmp1(bean a,bean b)
{
	return (a.weight/a.cost)>(b.weight/b.cost);
}
int main()
{
	int m,n;
	while(cin>>m>>n)
	{
		if(m==-1&&n==-1)
			break;
		vector<bean> v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i].weight;
			cin>>v[i].cost;
		}
		sort(v.begin(),v.end(),cmp1);
		double answer=0;
		for(int j=0;j<n;j++)
		{
			if(m>=v[j].cost)
			{
				m=m-v[j].cost;
				answer=answer+v[j].weight;
			}
			else
			{
				if(m<=0)
					break;
				else
				{
					answer=answer+(v[j].weight/v[j].cost)*m;
					m=0;
				}
			}
		}
		printf("%.3lf",answer);
		
	}
	
	return 0;
}

/*
FatMouse׼����M����è����׼���������ֿ����è���ף�����װ������ϲ����ʳ�JavaBean��
�ֿ���N�����䡣��i�䷿�����J���ص�JavaBeans����ҪF [i]����è���� FatMouse���ؽ��׷��������е�JavaBeans���෴�����������һ��èʳ�������ܻ�õ�һ��JavaBeans��������һ��ʵ�����������������ҵ������㣺�����������Ի�õ����JavaBeans������
����
�����ɶ������������ɡ�ÿ�������������԰��������Ǹ�����M��N���п�ʼ��Ȼ��N�а��������Ǹ�����J [i]��F [i]�����Ĳ�������֮��������-1����������������1000��
���
����ÿ��������������һ���д�ӡһ����ʵ���֣���ȷ��С�������λ������FatMouse���Ի�õ�JavaBean�����������
ʾ������
5 3
7 2
4 3
5 2
20 3
25 18
24 15
15 10
-1 -1
ʾ�����
13.333
31.500
*/