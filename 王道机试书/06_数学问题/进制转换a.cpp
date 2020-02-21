#include <iostream>
#include <string>
#include <vector>
using namespace std;
string Divide(string str,int x)
{
	int r=0;
	for(int i=0;i<str.size();i++)
	{
		int c=r*10+str[i]-'0';
		str[i]=c/x+'0';
		r=c%x;
	}
	int pos=0;
	while(str[pos]=='0')
		pos++;
	return str.substr(pos);
}
int main()
{
	string s;
	while(cin>>s)
	{
		vector<int> v;
		while(s.size()!=0)
		{
			int last=s[s.size()-1]-'0';
			v.push_back(last%2);
			s=Divide(s,2);
		}
		for(int i=v.size()-1;i>=0;i--)
			cout<<v[i];
		cout<<endl;
	}
	return 0;
}