#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str;
	while(cin>>str)
	{
		for(int i=0;i<str.size();i++)
		{
			if(str[i]=='0')
				str[i]='1';
			else
				str[i]='0';
		}
		cout<<str<<endl;
	}
	return 0;
}
