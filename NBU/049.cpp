#include <stdio.h>
int main()
{
	char x;
	scanf("%c",&x);
	if(x>='a'&&x<='z')
		printf("lower");
	else if(x>='A'&&x<='Z')
		printf("upper");
	else if(x>='0'&&x<='9')
		printf("digit");
	else 
		printf("other");
	return 0;

}