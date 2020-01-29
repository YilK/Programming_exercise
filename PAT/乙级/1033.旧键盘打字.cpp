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
	//不能时cin>>a>>b    这样a不能为空 
	//看看是否能打出大写
	if(a.find('+')!=string::npos)//不能打出大写字母 
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
