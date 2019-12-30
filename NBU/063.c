#include <stdio.h>
int main()
{
	char a,b;
	char temp;
	scanf("%c%c",&a,&b);
	if(a>b){
		temp=a;
		a=b;
		b=temp;
	}
	printf("%c %c\n",a,b );
	return 0;
}