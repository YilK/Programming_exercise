#include <iostream> //score 20
#include <string>
#include <cctype>
#include <stdio.h>
using namespace std;
int main()
{
	string s;
	getline(cin,s);//���룬������cin 
	int num[128]={0};// ASCII���Ӧ��ʮ�����������±� 
	for(int i=0;i<s.size();i++)
	{
		if(isalpha(s[i]))//�ж��Ƿ�����ĸ 
		{
			s[i]=tolower(s[i]);//ת��ΪСд 
			num[s[i]-NULL]++;//ע��null 
		}
	}
	int max=-1,mp=-1;//������������ĸ 
	for(int i=0;i<127;i++)
	{
		if(max<num[i])
		{
			max=num[i];
			mp=i;
		}
	}
	printf("%c %d",mp,max);//��� 
	return 0;	
} 
