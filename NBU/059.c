#include <stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	if(x>=80)
		printf("A\n");
	else if(x>=60)
		printf("B\n");
	else
		printf("C\n");
	return 0;
}