#include <iostream> //score 20
#include <string>
#include <cctype>
#include <stdio.h>
using namespace std;
int main()
{
	string s;
	getline(cin,s);//输入，不能用cin 
	int num[128]={0};// ASCII表对应的十进制是数组下标 
	for(int i=0;i<s.size();i++)
	{
		if(isalpha(s[i]))//判断是否是字母 
		{
			s[i]=tolower(s[i]);//转换为小写 
			num[s[i]-NULL]++;//注意null 
		}
	}
	int max=-1,mp=-1;//求最大次数的字母 
	for(int i=0;i<127;i++)
	{
		if(max<num[i])
		{
			max=num[i];
			mp=i;
		}
	}
	printf("%c %d",mp,max);//输出 
	return 0;	
} 
