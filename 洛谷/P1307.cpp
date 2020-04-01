#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	if(s[0]!='-')
	{
		int i=0,j=s.size()-1;
		while(i<j)
		{
			char a;
			a=s[i];
			s[i]=s[j];
			s[j]=a;
			i++;j--;
		}
		int p=0;
		while(s[p]=='0')
		{
			p++;
		}
		cout<<s.substr(p)<<endl;
		return 0;
	}
	else
	{
		s=s.substr(1);
		int i=0,j=s.size()-1;
		while(i<j)
		{
			char a;
			a=s[i];
			s[i]=s[j];
			s[j]=a;
			i++;j--;
		}
		int p=0;
		while(s[p]=='0')
		{
			p++;
		}
		cout<<'-'+s.substr(p)<<endl;
		return 0;
	}
} 
