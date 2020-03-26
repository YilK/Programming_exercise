#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int a[27]={0};
int main()
{
	string s;
	getline(cin,s);
	int sum=0;
	int i;
	for(i=0;i<s.size();i++)
	{
		if(isalpha(s[i]))
		{
			if(islower(s[i]))
				a[s[i]-'a'+1]++;
			else
				a[s[i]-'A'+1]++;
		}
	}
	for(i=1;i<=26;i++)
	{
		sum=sum+i*a[i];
	}
	int zero=0,one=0;
	while(sum!=0)
	{
		if(sum%2==0)
			zero++;
		else
			one++;
		sum=sum/2;
	}
	cout<<zero<<' '<<one<<endl;
	return 0;
}
