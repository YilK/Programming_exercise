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
			s.push(i);//Ñ¹Èë×óÀ¨ºÅµÄÏÂ±ê 
		}
		else if(str[i]==')')
		{
			if(!s.empty())
				s.pop();
			else
				n[i]='?';//ÓÒÀ¨ºÅ²»Æ¥Åä 
		 } 
	}	
	while(!s.empty())
	{
			n[s.top()]='$';//×óÀ¨ºÅ²»Æ¥Åä
			s.pop(); 
	} 
	cout<<str<<endl;
	for(int i=0;i<str.size();i++)
		cout<<n[i];
	return 0;
} 
