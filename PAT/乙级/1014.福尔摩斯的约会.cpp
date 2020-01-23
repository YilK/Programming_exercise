#include <iostream>
#include <stdio.h>
#include <map>
#include <cctype>
using namespace std;
int main()
{
	map<char,string> m;//设置键值对 
	m['A']="MON "; m['B']="TUE "; m['C']="WED "; m['D']="THU "; m['E']="FRI "; m['F']="SAT "; m['G']="SUN " ;
	string str[4];
	int i=0;
	for(i=0;i<=3;i++)//输入字符串 
		cin>>str[i];
	i=0;
	while(i<str[0].size()&&i<str[1].size())//计算出DAY 
	{
		if(str[0][i]==str[1][i]&&str[0][i]>='A'&&str[0][i]<='G')
		{
			cout<<m[str[0][i]];
			break; 
		}
		i++;
	}
	i=i+1;//往后移一位 
	while(i<str[0].size()&&i<str[1].size()) //计算出HH 
	{
		if(str[0][i]==str[1][i])
		{
			if(isdigit(str[0][i]))//如果是数字 
			{
				printf("%02d:",str[0][i]-'0');//格式要注意 9时要输出为09 
				break;
			}
			else if(isupper(str[0][i])&&str[0][i]>='A'&&str[0][i]<='N')//如果是字母 
			{
				printf("%02d:",10+str[0][i]-'A');
				break;
			}
		}
		i++;
	}
	i=0;
	while(i<str[2].size()&&i<str[3].size())//计算出分 
	{
		if(str[2][i]==str[3][i]&&isalpha(str[2][i]))
		{
			printf("%02d",i);
			break;
		}
		i++;
	}
	return 0;
}


