#include <stdio.h>
int main()
{
	double money;
	double sum=0;
	do{
		scanf("%lf",&money);
		if(money==0)
			break;
		else 
			sum=sum+money;
	}while(1);
	printf("%.2lf\n",sum );
	return 0;
}