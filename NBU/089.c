#include <stdio.h>
int main()
{
	int n1,n2;
	scanf("%d %d",&n1,&n2);
	int n=0,i;
	for(i=n1;i<=n2;i++)
	{
		if(i%3!=0){
			n++;
			if(n%5==0)
			{
				printf("%d\n",i );
			}
			else
				printf("%d ",i );
		}
	}
	return 0;	
}