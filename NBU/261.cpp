#include <iostream>
#include <string>
using namespace std;
int toint(string str,int n)
{
	int num=0;
	if(n>=str.size())
	{
		for(int i=0;i<str.size();i++)
			num=num*10+(str[i]-'0');
	}
	else
	{
		for(int j=str.size()-n;j<str.size();j++)
			num=num*10+(str[j]-'0');
	}
	return num;
}
int main()
{
	string a,b;
	int c;
	while(1)
	{
		cin>>a>>b>>c;
		if(a=="0"&&b=="0")
			break;
		int m=0,n=0;
		m=toint(a,c);
		n=toint(b,c);
		if(m==n)
		{
			cout<<-1<<endl;
			continue; 
		}
		m=0;n=0;
		for(int i=0;i<a.size();i++)
			m=m*10+(a[i]-'0');
		for(int j=0;j<b.size();j++)
			n=n*10+(b[j]-'0');
		cout<<m+n<<endl;
	}
	return 0;
}
