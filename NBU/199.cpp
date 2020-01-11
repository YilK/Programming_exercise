#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	int flag1=0,flag2=0;
	for(int i=0;i<s.size();i++)
	{
		if(isalpha(s[i]))
			flag1=1;
		else if(isdigit(s[i]))
			flag2=1;
	}
	if(flag1==1&&flag2==1)
		cout<<"mixed"<<endl;
	else if(flag1==1)
		cout<<"character"<<endl;
	else if(flag2==1)
		cout<<"digit"<<endl;
	return 0;
}
