#include <stdio.h>
#define n 1000
int main()
{
	char str[n];
	int i=0;
	gets(str);
	while(str[i]!='\0')
	{
		if(str[i]>='a'&&str[i]<='z')
			str[i]=str[i]-32;
		else if(str[i]>='A'&&str[i]<='Z')
			str[i]=str[i]+32;
		i++;
	}
	puts(str);
	return 0;
}