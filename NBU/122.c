#include <stdio.h>
int main()
{
	int m;
	scanf("%d",&m);
	int a[m+1];
	int i,j;
	int count=0;
	for(i=0;i<=m;i++)
		a[i]=1;//初始全部设置为1
	for(j=1;j<=m;j++)
	{
		for(i=1;i<=m;i++)
		{
			if(i%j==0)
			{
				if(a[i]==1)
					a[i]=0;
				else
					a[i]=1;
			}
		}
	}
	for(i=1;i<=m;i++){
		if (a[i]==0)
		{
			count++;
		}
	}
	printf("%d\n",count);
	for(i=1;i<=m;i++)
		if(a[i]==0)
			printf("%4d",i );
	printf("\n");
	return 0;

}