#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main()
{
	string str;
	cin>>str;
	stack<int> s;
	char n[str.size()]={' '};
	for(int i=0;i<str.size();i++)
	{
		if(str[i]=='(')
		{
			s.push(i);//ѹ�������ŵ��±� 
		}
		else if(str[i]==')')
		{
			if(!s.empty())
				s.pop();
			else
				n[i]='?';//�����Ų�ƥ�� 
		 } 
	}	
	while(!s.empty())
	{
			n[s.top()]='$';//�����Ų�ƥ��
			s.pop(); 
	} 
	cout<<str<<endl;
	for(int i=0;i<str.size();i++)
		cout<<n[i];
	return 0;
} 
