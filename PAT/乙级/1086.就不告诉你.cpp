#include <iostream>
#include <string>
using namespace std;//注意10000 这类结果的输出操作 
int main()
{
	int a,b;
	cin>>a>>b;
	int num,i;
	num=a*b;
	string s=to_string(num);
	for(i=s.size()-1;i>=0;i--)
	{
		if((s[i]-'0')!=0)
			break;	
	} 
	for(int j=i;j>=0;j--)
		cout<<s[j];

	return 0;
} 
