#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main()
{
	string s;
	stack<string> st;
	getline(cin,s);
	string tmp="";
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='\n'){
			break;
		}
		if(s[i]!=' ')
		{
		 	tmp+=s[i];
		}
		else
		{
			st.push(tmp);
			tmp="";
		}
	}
	st.push(tmp);
	while(!st.empty())
	{
		if(st.size()==1)
			cout<<st.top();
		else
			cout<<st.top()<<' ';
		st.pop();	
	}
	return 0;
 } 
