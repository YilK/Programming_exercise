#include <stdio.h>
int main()
{
	char letter;
	scanf("%c",&letter);
	if(letter>='a'&&letter<='z')
		printf("%c\n",letter-32 );
	else if(letter>='A'&&letter<='Z')
		printf("%c\n",letter+32);
	else 
		printf("%c\n",letter );
	return 0;
}