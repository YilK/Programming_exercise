#include <iostream>
#include <vector>
#include <string>
using namespace std;
string Divide(string str,int x)//�ַ�������; 
{
	int r=0;//��������
	for(int i=0;i<str.size();i++)
	{
		int c=r*10+str[i]-'0';
		str[i]=c/x+'0';
		r=c%x;
	} 
	int pos=0;
	while(str[pos]=='0')
		pos++;
	return str.substr(pos);
}
string Muliple(string str,int x)//�ַ����˷� 
{
	int c=0;//�����λ 
	for(int i=str.size()-1;i>=0;i--)
	{
		int current=x*(str[i]-'0')+c;
		str[i]=current%10+'0';
		c=current/10;
	 } 
	 if(c!=0)
	 	str="1"+str;
	 return str;	
}
string Add(string str,int x)
{
	int carry=x;
	for(int i=str.size()-1;i>=0;--i)
	{
		int current=(str[i]-'0')+carry;
		str[i]=current%10+'0';
		carry=current/10; 
	}
	if(carry!=0)
		str="1"+str;
	return str;
}

int main()
{
	string str;
	cin>>str;
	vector<int> v;
	while(str.size()!=0)
	{
		int last=str[str.size()-1]-'0';
		v.push_back(last%2);
		str=Divide(str,2); 
	}
	//v�б�����Ƕ�����
	string answer="0";
	for(int i=0;i<v.size();i++)//������ 
	{
		answer=Muliple(answer,2);
		answer=Add(answer,v[i]);
	}
	cout<<answer<<endl;
	return 0;
	 
} 
