#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
	string a,b,c;
	int flag=0;
	getline(cin,a);
	getline(cin,b);
	//����ʱcin>>a>>b    ����a����Ϊ�� 
	//�����Ƿ��ܴ����д
	if(a.find('+')!=string::npos)//���ܴ����д��ĸ 
	{
		for(int i=0;i<b.size();i++)
		{
			if(a.find(b[i])==string::npos&&!isupper(b[i])&&a.find(toupper(b[i]))==string::npos)
			{
				c+=b[i];
				flag=1;	
			}	
		} 
	} 
	else
	{
		for(int i=0;i<b.size();i++)
		{
			if(a.find(b[i])==string::npos&&a.find(toupper(b[i]))==string::npos)
			{
				c+=b[i];
				flag=1;	
			}
	    } 
	} 
	if(flag==1)
		cout<<c;
	else
		cout<<endl;
	return 0;
} 
