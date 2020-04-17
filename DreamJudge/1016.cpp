#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	int i;
	string s1,s2,s3;
	for(i=0;i<s.size();i++)
	{
		if(isalpha(s[i]))
			s1+=s[i];
		else if(isdigit(s[i]))
			s2+=s[i];
		else
			s3+=s[i];
	}
	cout<<s1<<endl;
	cout<<s2<<endl;
	cout<<s3<<endl;
	return 0;

}
