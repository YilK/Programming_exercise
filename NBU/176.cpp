#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
//˼·���ǿո���+1�� 
int main()
{
	string str;
	getline(cin,str);//�����ַ���
	int count=0;//������
	for(int i=0;i<str.length();i++)
	{
		if(str[i]==' ')
			count++;
	 }
	printf("%d\n",count+1);
//	cout<<str;
	return 0;
}
