#include<stdio.h>
int mylen(char s[])
{
	int count=0;
	for(int i=0;s[i]!='\0';i++)
		count++;
	return count;
} 
int main()
{
char str[101];
int len=0;
gets(str);
len=mylen(str);  //调用函数求字符串长度
printf("%d ",len);
printf("%s\n",str);
return 0;
}
