#include <stdio.h>
int main()
{
	float sum=0,n;
	int i=0;
	do{
		scanf("%f",&n);
		if(n<0)
			break;
		sum=sum+n;
		i++;
	}while(1);
	printf("%.1f\n",sum/i );
	return 0;
}