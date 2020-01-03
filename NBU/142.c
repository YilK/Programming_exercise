#include <stdio.h>
int main()
{
	int i,j;
	double sum;
	double a[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			scanf("%lf",&a[i][j]);
	}
	for(i=0;i<3;i++){
		sum=0;
		for(j=0;j<3;j++){
			sum=sum+a[i][j];			
		}
		printf("%.1lf\n",sum/3 );
	}
}