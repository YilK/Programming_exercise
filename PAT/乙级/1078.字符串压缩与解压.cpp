#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
	char c;
	cin>>c;
	getchar();
	string s;
	getline(cin,s);
	string str;
	int i,j;
	if(c=='C')
	{
		for(i=0;i<s.size();)
		{
			int k=1;
			for(j=i+1;j<s.size();j++)//双指针的走法 
			{
				if(s[i]==s[j])
				{
					k++;
				}
				else
				{
					break;
				}
			}
			if(k==1)
				cout<<s[i];
			else
			{
				cout<<k;
				cout<<s[i];
			}
			i=j;
		}
	}
	else if(c=='D')
	{
		for(i=0;i<s.size();i++)
		{
			if(isdigit(s[i]))
			{
				int sum=s[i]-'0';
				while(isdigit(s[i+1])&&i+1<s.size())
				{
					i++;
					sum=sum*10+(s[i]-'0');
				}
				for(j=0;j<sum;j++)
					cout<<s[i+1];
				i++;
			}
			else
				cout<<s[i];
		}
	}
	cout<<str<<endl;
	return 0;
}
