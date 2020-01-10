#include<stdio.h>
#include<string.h>
void mystrcat(char a[],char b[])
{
	int i,j;
	while(a[i]!='\0')
		i++;
	while(b[j]!='\0')
	{
		a[i]=b[j];
		i++;
		j++;
	}
}
int main()
{
	char s1[202],s2[101];
	gets(s1);
	gets(s2);
	mystrcat(s1,s2);  //调用函数连接字符串
	puts(s1);

}
