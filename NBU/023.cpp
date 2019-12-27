#include <stdio.h>
int main()
{
	char a1,a2,a3;
	scanf("%c%c%c",&a1,&a2,&a3);//输入字符
	if(a1=='-')
		printf("%d\n",a2-a3);
	if(a1=='+')
		printf("%d\n",a2+a3 );
	return 0;
}