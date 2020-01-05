#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	long long c,d,e;
	for(i=0;i<n;i++)
	{
		scanf("%lld %lld %lld",&c,&d,&e);
		if((c+d)>e)
			printf("Case #%d: true\n",i+1);
		else
			printf("Case #%d: false\n",i+1);
	}
	return 0;
 } 
