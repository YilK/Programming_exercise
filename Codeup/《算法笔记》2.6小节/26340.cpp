#include <iostream>
#include <string>
using namespace std;
string ch(string s)
{
	string res;
	int i;
	for(i=0;i<s.size();i++)
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
			res+=s[i];
	return res;
}
int main()
{
	string s,res;
	cin>>s;
	cout<<ch(s)<<endl;
	return 0;
	
}
