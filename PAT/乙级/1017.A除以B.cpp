#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	string s;//�����ݴ����ַ��� 
	int b,k=0;
	vector<int> v;//������̬���� 
	cin>>s>>b;
	if(s.size()==1)//�Ը�λ���������⴦�� 
	{
		k=stoi(s);
		cout<<k/b<<' '<<k%b;
	}
	else
	{
		for(int i=0;i<s.size();i++)
		{
			k=k*10+s[i]-'0';//�ַ�ת��Ϊ���� �ص� 
			if(k<b)
			{
				if(v.size()==0)
					continue;
				else
					v.push_back(0);	
			}
			else
			{
				v.push_back(k/b);
				k=k%b;
			}	
		}
		for(int i=0;i<v.size();i++)
			cout<<v[i];
		cout<<' ';
		cout<<k;
	}
	return 0;
} 
