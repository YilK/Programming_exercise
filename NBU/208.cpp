#include <stdio.h>
#include <math.h>
int main()
{
	double x,y;
	char a;
	scanf("%lf %c %lf",&x,&a,&y);
	double num;
	switch(a)
	{
		case '+':num=x+y;printf("%.2lf\n",num);break;
		case '-':num=x-y;printf("%.2lf\n",num);break;
		case '*':num=x*y;printf("%.2lf\n",num);break;
		case '/':num=x/y;printf("%.2lf\n",num);break;
		case '^':num=pow(x,y);printf("%.2lf\n",num);break;
		default:printf("Error\n");
	}	
	return 0;
} 
