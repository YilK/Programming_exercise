#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int num[a][b];
	int i,j;
	for(i=0;i<a;i++)//输入数据
	{
		for(j=0;j<b;j++)
		{
			scanf("%d",&num[i][j]);
		}
	}
	int nums[b][a];
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
			nums[j][i]=num[i][j];
	}
	for(i=0;i<b;i++)//输入数据
	{
		for(j=0;j<a;j++)
		{
			printf("%d ",nums[i][j]);
		}
		printf("\n");
	}

	return 0;
}