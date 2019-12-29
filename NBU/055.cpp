#include <stdio.h>
#include <math.h>
#include <string.h>
#define n 1000
int main()//这一道题的answer有问题
{
	char str[n];
	int i=0,v=0,j;
	gets(str);//
	j=strlen(str);//得到长度
	while(str[i]!='@'&&j!=1)
	{
		v++;
		gets(str);
		j=strlen(str);
	}
	printf("%d\n",v);
	return 0;
}