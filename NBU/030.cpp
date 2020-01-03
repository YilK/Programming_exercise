#include <stdio.h>
#include <math.h>
int main()
{
	int i,m,a;
	unsigned __int64 s=0;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		a=pow(2,i);
		s=s+a;
	}
	printf("%I64u\n",s);
	return 0;
}