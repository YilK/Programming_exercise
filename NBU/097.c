#include <stdio.h>
int main()
{
	int n,a;
	scanf("%d %d",&n,&a);
	int sum=0,i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++){
			switch(j)
			{
				case 1:sum=sum+a;break;
				case 2:sum=sum+a*10;break;
				case 3:sum=sum+a*100;break;
				case 4:sum=sum+a*1000;break;
				case 5:sum=sum+a*10000;break;
				case 6:sum=sum+a*100000;break;
				case 7:sum=sum+a*1000000;break;
				case 8:sum=sum+a*10000000;break;
				case 9:sum=sum+a*100000000;break;
			}
		}

	}
	printf("%d\n",sum );
	return 0;
}