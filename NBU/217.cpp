#include <stdio.h>
int main()
{
	double dollars;
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);//ÊäÈë¸öÊı
	dollars=a; 
	double five=0.5*b;
	dollars+=five;
	double yi=0.1*c;
	dollars+=yi;
	printf("Dollars=%d\n",int(dollars));
	printf("Change=%d\n",int((dollars-int(dollars))*100+0.1));
	return 0; 
	 
}
