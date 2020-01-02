#include <stdio.h>
int main()
{
	int k1,k2;
	scanf("%d %d",&k1,&k2);
	int num=0;
	int i,j,flag;
	int a[100];
	for(j=k1;j<=k2;j++)
	{
		if(j==1)
			continue;//1不是
		flag=0;
		for(i=2;i<j;i++)
		{
			if(j%i==0)
			{
				flag=1;//设置标记，此数不是素数
				break;
			}
		}
		if(flag==0){
			num++;
			a[num]=j;
		}
	}
	printf("%d\n",num );
	for(i=1;i<=num;i++)
		if(i==num)
			printf("%d\n",a[i] );
		else
			printf("%d ",a[i] );
	return 0;
}