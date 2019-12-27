#include <stdio.h>
int main()
{
	int x,a=0;
	scanf("%d",&x);
	if(x==0)
		printf("%d\n",1);
	else 
		while(x>0)
		{
			x=x/10;
			a++;
		}

	printf("%d\n",a );
	return 0;
}