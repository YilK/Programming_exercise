#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
int main()
{
	string s1,s2="(max)";
	cin>>s1;
	int m=0,t=0,i;
	char num;
	for(i=1;i<s1.size();i++)//找到最大的字符
		if(s1[m]<s1[i])
		{
			m=i;
		}
	for(i=0;i<s1.size();i++)//统计字符出现的次数
		if(s1[m]==s1[i])
		{
			t++;
		}
	num=s1[m];
	int j=1;
	for(i=m;j<=t;i++)
	{
		if(s1[i]==num)
		{
			s1.insert(i+1,s2);
			j++;
		}
	}
	cout<<s1<<endl;
	return 0;
}
