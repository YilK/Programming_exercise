#include <stdio.h>
int main()
{
	int N;
	int i;
	int n;
	int a1=0,a2=0,a3=0;
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		scanf("%d",&n);
		if(n>0)
			a1++;
		else if(n==0)
			a2++;
		else
			a3++;
	}
	printf("%d\n",a1 );
	printf("%d\n",a3 );
	printf("%d\n",a2 );
	return 0;
}