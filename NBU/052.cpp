#include <stdio.h>
int main()
{
	char x;
	int i=0;
	scanf("%c",&x);
	while(x!='\n')
	{
		if(x>='0'&&x<='9')
			i++;
		scanf("%c",&x);
	}
	printf("%d\n",i);
	return 0;
}