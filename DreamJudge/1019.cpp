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
		if(isupper(s[i]))
			s[i]=s[i]+32;
	}
	for(i=0;i<s.size();i++)
		if(isalpha(s[i]))
			a[s[i]-'a']++;
	int max=0;
	for(i=1;i<=25;i++)
		if(a[max]<a[i])
			max=i;
	char c='a'+max;
	cout<<c<<' '<<a[max]<<endl;
	return 0;
}
