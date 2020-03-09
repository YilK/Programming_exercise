#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	for(int i=0;i<s.size();i++)
	{
		if(s[i]>='A'&&s[i]<='Z')
		{
			s[i]=s[i]+3;
		}
		else if(s[i]>='a'&&s[i]<='z')
		{
			s[i]=s[i]-3;
		}
	}
	cout<<s<<endl;
	return 0;
}
