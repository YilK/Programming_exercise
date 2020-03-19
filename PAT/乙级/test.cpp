#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int judge(string s)
{
	for(int i=0;i<=16;i++)
		if(!isdigit(s[i]))
			return -1;
	return 1;
}
int main()
{
	int n;
	cin>>n;
	int i;
	int w[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	char j[11]={'1','0','X','9','8','7','6','5','4','3','2'};
	for(i=0;i<n;i++)
	{
		string str;
		cin>>str;
		int num=0;
		if(judge(str)==-1)
			cout<<str<<endl;
		else
		{
			for(int j=0;j<=16;j++)
				num=num+(str[i]-'0')*w[j];
			num=num%11;
			if(j[num]!=str[17])
				cout<<str<<endl;
		}
		
	}
	return 0;
}
