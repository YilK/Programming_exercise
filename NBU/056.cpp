#include <stdio.h>
#include <string.h>
#define n 1000
int main()
{
	char str[n];
	gets(str);
	int len=strlen(str);
	char a;
   int i;
	int count=0;
	scanf("%c",&a);//特定字符
	for(i=0;i<len;i++)
	{
		if(a==str[i])
			count++;
	}
	printf("%d",count);
	return 0;
}