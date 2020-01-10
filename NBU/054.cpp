#include <stdio.h>
int main()
{
	char x;
	scanf("%c",&x);
	char a=x;
	while(x!='\n')
	{
		scanf("%c",&x);
		if(x==a){
			printf("%c\n",x);
			return 0;
		}
		else
			a=x;
	}
	printf("No\n");
	return 0;
}