#include <stdio.h>
int main()
{
	double H;//华氏温度
	double C;//摄氏温度
	scanf("%lf",&H);
	C=5*(H-32)/9;
	printf("%.2lf\n",C );
	return 0;
}