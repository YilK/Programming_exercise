#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
int main()
{
	string a,b;
	int da,db;
	cin>>a>>da>>b>>db;//输入
	int pa=0,pb=0;
	for(int i=0;i<a.length();i++)
	{
		if(da==a[i]-'0')
			pa=pa*10+da;	
	}
	for(int i=0;i<b.length();i++)
	{
		if(db==b[i]-'0')
			pb=pb*10+db;
	}
	printf("%d\n",pa+pb);
//	cout<<a<<da<<b<<db;
	return 0; 
} 
/*利用string 引入#include <string>
遍历字符串中字符  利用字符所对应的十进制进行比对 
