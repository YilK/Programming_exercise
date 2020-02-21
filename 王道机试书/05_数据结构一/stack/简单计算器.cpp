

#include <iostream>
#include <stack>
#include <cstdio>
#include <cctype>
#include <string>
using namespace std;
 
int pri (char ch){//�����ַ����ȼ�
    int p=-1;
    if(ch=='#')
        p=0;
    else if(ch=='$')
        p=1;
    else if(ch=='+'||ch=='-')
        p=2;
    else
        p=3;
    return p;
}
 
double getNumber(string s, int& index){//�����ַ�����ǰ�±굽��һ���ո�������
    double ans=0;
    while(isdigit(s[index])){
        ans*=10;
        ans+=s[index]-'0';
        index++;
    }
    return ans;
}
 
double cal (double x, double y, char ch){//�����ַ����ȼ�
    double result=0;
    if(ch=='+')
        result=x+y;
    else if(ch=='-')
        result=x-y;
    else if(ch=='*')
        result=x*y;
    else if(ch=='/')
        result=x/y;
    return result;
}
        
int main(){
    string str;
    while(getline(cin,str,'\n') && str!="0"){
         
        int index=0;
        stack<double>num;
        stack<char>op;
        str+='$';
        op.push('#');
        while(index<str.length()){
            if(str[index]==' '){
                index++;
            }
            else if(isdigit(str[index])){
                num.push(getNumber(str, index));
            }
            else{
                if(pri(str[index])>pri(op.top())){//�����ǰ�ַ���ջ���ַ������ȼ��ߣ����ջ
                    op.push(str[index]);
                    index++;
                }
                else{//�����ǰ�ַ���ջ���ַ������ȼ��ͣ������ջ���
                    //���ֵ�˳���Ū����
                    double y = num.top();
                    num.pop();
                    double x = num.top();
                    num.pop();
                    char ch = op.top();
                    num.push(cal(x,y,ch));//����ٷ���ջ
                    op.pop();
                }
            }
        }
        printf("%.2f\n",num.top());
    }
    return 0;
}