/*
1.��׺תΪ��׺
2.�����׺���ʽ 
*/
#include <iostream>
#include <string> 
#include <stack>
#include <queue>
#include <map>
using namespace std;
struct node{
	double num;//������ 
	char op;//������
	bool flag;//true��ʾ��������false���������� 
};
string str;
stack<node> s;//������ջ
queue<node> q;//��׺���ʽ����
map<char,int> op;
void change()//��׺ת��Ϊ��׺ 
{
	double num;
	node temp;
	for(int i=0;i<str.size();)
	{
		if(str[i]>='0'&&str[i]<='9'){//���������
			temp.flag=true;
			temp.num=str[i++]-'0';
			while(i<str.size()&&str[i]>='0'&&str[i]<='9') 
			{
				temp.num=temp.num*10+str[i]-'0';
				i++;
			}
		q.push(temp);//�������������ջ	
		}
		else{
			//����ǲ�����
			 temp.flag=false;//����ǲ�����
			 //ֻҪ������ջ��ջ��Ԫ�رȸ�Ԫ�ص����ȼ���
			 //�ͰѲ�����ջջ��Ԫ�ص�������׺���ʽ��
			 while(!s.empty()&&op[str[i]]<=op[s.top().op])
			 {
			 	q.push(s.top());
			 	s.pop();
			  }
			 temp.op=str[i];
			 s.push(temp);//�Ѹò�����ѹ�������ջ��
			 i++; 
		} 
	} 
	while(!s.empty())
	{
		//������ջ�л���Ԫ��
		q.push(s.top());
		s.pop();
	}
 } 
 double cal()//�����׺���ʽ
 {
 	double temp1,temp2;
	node cur,temp;
	while(!q.empty())
	{
		cur=q.front();
		q.pop();
		if(cur.flag==true) s.push(cur);//����ǲ�����ֱ����ջ��
		else
		{
			temp2=s.top().num;//�����ڶ������� 
			s.pop();
			temp1=s.top().num;//������һ������ 
			s.pop();
			temp.flag=true;//��¼��ʱ������
			if(cur.op=='+')	temp.num=temp1+temp2;
			else if(cur.op=='-')	temp.num=temp1-temp2;
			else if(cur.op=='*')	temp.num=temp1*temp2;
			else
				temp.num=temp1/temp2;
			s.push(temp); 
		 } 
	 } 
	return s.top().num;
 } 
 int main()
 {
 	op['+']=op['-']=1;
 	op['*']=op['/']=2;
 	while(getline(cin,str),str!="0")
 	{
 		while(!s.empty())	s.pop();//��ʼ��ջ
		change();//����׺ת��Ϊ��׺ 
		cout<<cal(); //�����׺���ʽ 
	}
	return 0;
 }
