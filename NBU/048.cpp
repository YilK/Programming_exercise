#include <stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	if(x>='a'&&x<='z'||x>='A'&&x<='Z')
		printf("%c\n",x );
	else
		printf("%d\n",x );
	return 0;
}