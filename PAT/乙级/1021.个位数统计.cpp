#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
	string s;//�����ݴ����ַ��� 
	cin>>s;
	map<char,int> m;//������ֵ�� 
	for(int i=0;i<10;i++)
	{
		m['0'+i]=0; //��ÿ��������Ӧ��ֵ��ʼ��Ϊ0 
	}
	for(int i=0;i<s.size();i++)
	{
		m[s[i]]++;//�Գ��ֵ��ַ������ۼ� 
	}
	for(int i=0;i<10;i++)//��� 
	{
		if(m['0'+i]!=0)
			cout<<i<<':'<<m['0'+i]<<endl;	
	}
	return 0;
} 
