#define P 3.14
#include <stdio.h>
int main()
{
	double r,h;//底面半径r和高h
	double S;//表面积
	scanf("%lf %lf",&r,&h);
	S=P*r*r*2+2*P*r*h;
	printf("%.2lf\n",S);
	return 0;
}