#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int res=0;
	int flag=1;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='O')
		{
			res+=flag;
			flag++;
		}
		else
		{
			flag=1;
		}
	}
	cout<<res<<endl;
	return 0;
	
} 
