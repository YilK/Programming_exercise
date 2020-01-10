#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
	string str;
	getline(cin,str);
//	cout<<str.size();
	for(int i=0;i<str.size();i++)
	{
		if(isupper(str[i]))
		{
			str[i]=155-str[i];
		}
		else if(islower(str[i]))
		{
			str[i]=219-str[i];
		}
		else
			continue;
	}
	cout<<str<<endl;
	return 0;
}
