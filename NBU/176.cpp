#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
//思路就是空格数+1； 
int main()
{
	string str;
	getline(cin,str);//输入字符串
	int count=0;//计数器
	for(int i=0;i<str.length();i++)
	{
		if(str[i]==' ')
			count++;
	 }
	printf("%d\n",count+1);
//	cout<<str;
	return 0;
}
