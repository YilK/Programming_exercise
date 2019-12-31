#include <stdio.h>
int main()
{
	double x,y;
	char z;
	scanf("%lf%c%lf",&x,&z,&y);
	switch(z)
	{
		case '+':printf("%.2lf\n",x+y );break;
		case '-':printf("%.2lf\n",x-y );break;
		case '*':printf("%.2lf\n",x*y );break;
		case '/':printf("%.2lf\n",x/y );break;
	}
	return 0;
}