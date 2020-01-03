#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,c,p,s;
	scanf("%lf %lf %lf",&a,&b,&c);//输入三条边
	if(a+b>c&&a+c>b&&b+c>a)//符合三角形的要求
	{
		p=(a+b+c)/2;
		s=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("%.2lf\n",s );
	}
	else//不符合要求
		printf("Error\n");
	return 0;

}