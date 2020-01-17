/*
1.中缀转为后缀
2.计算后缀表达式 
*/
#include <iostream>
#include <string> 
#include <stack>
#include <queue>
#include <map>
using namespace std;
struct node{
	double num;//操作数 
	char op;//操作符
	bool flag;//true表示操作数，false表述操作符 
};
string str;
stack<node> s;//操作符栈
queue<node> q;//后缀表达式序列
map<char,int> op;
void change()//中缀转换为后缀 
{
	double num;
	node temp;
	for(int i=0;i<str.size();)
	{
		if(str[i]>='0'&&str[i]<='9'){//如果是数字
			temp.flag=true;
			temp.num=str[i++]-'0';
			while(i<str.size()&&str[i]>='0'&&str[i]<='9') 
			{
				temp.num=temp.num*10+str[i]-'0';
				i++;
			}
		q.push(temp);//将这个操作数入栈	
		}
		else{
			//如果是操作符
			 temp.flag=false;//标记是操作符
			 //只要操作符栈的栈顶元素比该元素的优先级高
			 //就把操作符栈栈顶元素弹出到后缀表达式中
			 while(!s.empty()&&op[str[i]]<=op[s.top().op])
			 {
			 	q.push(s.top());
			 	s.pop();
			  }
			 temp.op=str[i];
			 s.push(temp);//把该操作符压入操作符栈中
			 i++; 
		} 
	} 
	while(!s.empty())
	{
		//操作符栈中还有元素
		q.push(s.top());
		s.pop();
	}
 } 
 double cal()//计算后缀表达式
 {
 	double temp1,temp2;
	node cur,temp;
	while(!q.empty())
	{
		cur=q.front();
		q.pop();
		if(cur.flag==true) s.push(cur);//如果是操作数直接入栈；
		else
		{
			temp2=s.top().num;//弹出第二操作数 
			s.pop();
			temp1=s.top().num;//弹出第一操作数 
			s.pop();
			temp.flag=true;//记录临时操作数
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
 		while(!s.empty())	s.pop();//初始化栈
		change();//将中缀转换为后缀 
		cout<<cal(); //计算后缀表达式 
	}
	return 0;
 }
