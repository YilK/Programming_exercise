#include <iostream>
#include <stdio.h>
#include <map>
#include <cctype>
using namespace std;
int main()
{
	map<char,string> m;//���ü�ֵ�� 
	m['A']="MON "; m['B']="TUE "; m['C']="WED "; m['D']="THU "; m['E']="FRI "; m['F']="SAT "; m['G']="SUN " ;
	string str[4];
	int i=0;
	for(i=0;i<=3;i++)//�����ַ��� 
		cin>>str[i];
	i=0;
	while(i<str[0].size()&&i<str[1].size())//�����DAY 
	{
		if(str[0][i]==str[1][i]&&str[0][i]>='A'&&str[0][i]<='G')
		{
			cout<<m[str[0][i]];
			break; 
		}
		i++;
	}
	i=i+1;//������һλ 
	while(i<str[0].size()&&i<str[1].size()) //�����HH 
	{
		if(str[0][i]==str[1][i])
		{
			if(isdigit(str[0][i]))//��������� 
			{
				printf("%02d:",str[0][i]-'0');//��ʽҪע�� 9ʱҪ���Ϊ09 
				break;
			}
			else if(isupper(str[0][i])&&str[0][i]>='A'&&str[0][i]<='N')//�������ĸ 
			{
				printf("%02d:",10+str[0][i]-'A');
				break;
			}
		}
		i++;
	}
	i=0;
	while(i<str[2].size()&&i<str[3].size())//������� 
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


