#include <iostream>
#include <string>
#include <vector>
using namespace std;
int judge1(char a)//ͳ��ÿ���ַ�����Ӧ������ 
{
	int n;
	switch(a)
	{
		case'0':n=0;break;
		case'1':n=1;break;
		case'2':n=2;break;
		case'3':n=3;break;
		case'4':n=4;break;
		case'5':n=5;break;
		case'6':n=6;break;
		case'7':n=7;break;
		case'8':n=8;break;
		case'9':n=9;break;
	}
	return n;
}
string judge2(int a)//�ó�ÿ����������Ӧ���ַ��� 
{
	string n;
	switch(a)
	{
		case 0:n="ling";break;
		case 1:n="yi";break;
		case 2:n="er";break;
		case 3:n="san";break;
		case 4:n="si";break;
		case 5:n="wu";break;
		case 6:n="liu";break;
		case 7:n="qi";break;
		case 8:n="ba";break;
		case 9:n="jiu";break;
	}
	return n;
}
int main()
{
	string n;//�����ݴ����ַ����� 
	cin>>n;//�������� 
	int sum=0;
	for(int i=0;i<n.size();i++)//�������λ����֮�� 
	{
		sum+=judge1(n[i]);
	}
	vector<string> v;//������̬���� 
	while(sum!=0)
	{
		v.push_back(judge2(sum%10));//����������Ӧ���ַ����������� 
		sum=sum/10;
	}
	for(int i=v.size()-1;i>=0;i--)//��� 
	{
		if(i==0)
			cout<<v[i];
		else 
			cout<<v[i]<<' ';
	 } 
	return 0;
} 
