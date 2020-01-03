#include <stdio.h>
int main()
{
	char a;
	scanf("%c",&a);
	if(a>='a'&&a<='z'||a>='A'&&a<='Z')
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}