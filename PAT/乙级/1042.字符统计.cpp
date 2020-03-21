#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	int a[26]={0};
	int i;
	for(i=0;i<s.size();i++)
	{
		if(isalpha(s[i]))
		{
			if(isupper(s[i]))
			{
				a[s[i]-'A']++;
			}
			else
				a[s[i]-'a']++;
		}
	}
	int min=a[0];
	int min_=0;
	for(i=1;i<26;i++)
	{
		if(min<a[i])
		{
			min=a[i];
			min_=i;
		}
	}
	char c=min_+'a';
	cout<<c<<' '<<min<<endl;
	return 0;
}
