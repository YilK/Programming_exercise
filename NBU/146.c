#include <stdio.h>
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int i,n1=1,n2=1;
	for(i=m;i>=(m-n+1);i--)
		n1=n1*i;
	for(i=1;i<=n;i++)
		n2=n2*i;

	printf("%d\n",n1/n2 );
	return 0;
}