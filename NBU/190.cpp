#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	int flag=0;
	for(int i=0;i<s.size();i++)
	{
		if(i==0)
		{
			if(isalpha(s[i])||s[i]=='_')
				continue;
			else
			{
				flag=1;
				break;
			}
		}
		else
		{
			if(isalpha(s[i])||s[i]=='_'||isdigit(s[i]))
				continue;
			else
			{
				flag=1;
				break;
			}	
		}
	}
	if(flag==1)
		cout<<"no"<<endl;
	else
		cout<<"yes"<<endl;
	return 0; 
} 
