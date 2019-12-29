#include <stdio.h>
int main()
{
	char a;
	int i=0;
	scanf("%c",&a);
	while(a!='\n')
	{
		i++;
		scanf("%c",&a);
	}
	printf("%d\n",i);
	return 0;

}