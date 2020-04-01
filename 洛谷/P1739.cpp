#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main()
{
	stack<char> s;
	string str;
	cin>>str;
	int i;
	for(i=0;i<str.size();i++)
	{
		if(str[i]=='(')
			s.push(str[i]);
		else if(str[i]==')')
		{
			if(s.empty())//Èç¹ûÊÇ¿Õ 
			{
				cout<<"NO"<<endl;
				return 0;
			}
			else
			{
				s.pop();
			}
		}
	}
	if(s.empty()) 
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
