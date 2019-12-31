#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	double sum=1;
	int j;
	int i=2;
	for(j=2;j<=n;j++)
	{
		if(j%2==0)
			sum=sum-1.0/i;
		else
			sum=sum+1.0/i;
		i=i*2;
	}
	printf("%.2lf\n",sum );
	return 0;
}
//我觉得应该是对的，为什么会通过不了