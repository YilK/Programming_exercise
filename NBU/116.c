#include <stdio.h>
#include <math.h>
int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	double number;
	number=pow(x,y);
	// printf("%lf\n",number );
	int a;
	a=int(number);
	printf("%d %d\n",a,a%1000 );
	return 0;
}