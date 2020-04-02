#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	string s;
	cin>>n;
	int i;
	string str;
	for(i=1;i<=n+1;i++)
	{
		getline(cin,str);
		int place=str.find('T')-2;
		if(str[place]=='A')
			s+='1';
		else if(str[place]=='B') 
			s+='2';
		else if(str[place]=='C') 
			s+='3';
		else if(str[place]=='D') 
			s+='4';
	}
	cout<<s<<endl;
	return 0;
}
