#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
	string s1,s2;
	while(cin>>s1>>s2)
	{
		int a=0,b=0;
		for(int i=0;i<s1.size();i++)
		if(isdigit(s1[i]))
			a=a*10+(s1[i]-'0');
		if(s1[0]=='-')
			a=-a;
		for(int i=0;i<s2.size();i++)
		if(isdigit(s2[i]))
			b=b*10+(s2[i]-'0');
		if(s2[0]=='-')
			b=-b;
		cout<<a+b<<endl; 
	}
	return 0;
}
