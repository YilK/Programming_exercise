

#include <iostream>
#include <stack>
#include <cstdio>
#include <cctype>
#include <string>
using namespace std;
 
int pri (char ch){//返回字符优先级
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
 
double getNumber(string s, int& index){//返回字符串当前下标到下一个空格间的数字
    double ans=0;
    while(isdigit(s[index])){
        ans*=10;
        ans+=s[index]-'0';
        index++;
    }
    return ans;
}
 
double cal (double x, double y, char ch){//返回字符优先级
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
                if(pri(str[index])>pri(op.top())){//如果当前字符比栈顶字符的优先级高，则进栈
                    op.push(str[index]);
                    index++;
                }
                else{//如果当前字符比栈顶字符的优先级低，则计算栈里的
                    //数字的顺序别弄反了
                    double y = num.top();
                    num.pop();
                    double x = num.top();
                    num.pop();
                    char ch = op.top();
                    num.push(cal(x,y,ch));//结果再放入栈
                    op.pop();
                }
            }
        }
        printf("%.2f\n",num.top());
    }
    return 0;
}