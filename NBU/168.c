#include <stdio.h>
int main()
{
	int a[100],b[100];
	int n,i,m,c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d %d",&a[i],&b[i]);
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		if(m==a[i]){
			printf("%d\n",b[i] );
			c++;
		}
	}
	if(c==0)
		printf("No found\n" );
	return 0;

}