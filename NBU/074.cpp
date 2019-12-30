#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,x;
	scanf("%d %d",&a,&b);
	x=pow(a,2)+pow(b,2);
	if(x<=100)
		printf("%d\n", x);
	else
	{
		printf("%d\n", x/100);
	}
	return 0;
}