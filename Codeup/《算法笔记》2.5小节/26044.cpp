#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int i;
	for(i=0;i<s.size();i++)
	{
		if(isupper(s[i]))
			s[i]=155-s[i];
		else if(islower(s[i]))
			s[i]=219-s[i];
	} 
	cout<<s<<endl;
	return 0;
}
