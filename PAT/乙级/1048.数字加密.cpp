#include <iostream>//score 16 	A，B的长度是不一致的需要在短的前边加上0 
#include <string>
#include <vector>
using namespace std;
int main()
{
	int flag=0;
	string a,b;
	cin>>a>>b;
	vector<char> v;
	int i=a.size(),j=b.size();
	if(i<j)
		for(int k=1;k<=j-i;k++)
			a='0'+a;
	else if(i>j)
		for(int k=1;k<=i-j;k++)
			b='0'+b;
	i=a.size()-1;
	while(i>=0)
	{
		if(flag==0)//奇数位 
		{
			int c=((b[i]-'0')+(a[i]-'0'))%13;
			if(c==10)
				v.push_back('J'); 
			else if(c==11)
				v.push_back('Q');
			else if(c==12)
				v.push_back('K');
			else
			{
				char k='0'+c;
				v.push_back(k);
			}
			flag=1;
		}
		else
		{
			int c=(b[i]-a[i]);
			if(c<0)
			{
				char k='0'+c+10;
				v.push_back(k);
			}
			else
			{
				char k='0'+c;
				v.push_back(k);
			}
			flag=0;
		}
		i--;j--;
	}
	for(int j=v.size()-1;j>=0;j--)
		cout<<v[j];
	return 0;
} 
