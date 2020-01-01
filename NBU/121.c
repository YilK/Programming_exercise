#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,a;
	for(i=0;i<=n;i++){
		a=pow(2,i);
		if(i==n)
			printf("%d\n",a);
		else 
			printf("%d ",a);
	}
	return 0;

}