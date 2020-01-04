#include <stdio.h>
int main()
{
	int a[5];
	int i,j,flag=0;
	for(i=0;i<=4;i++)
		scanf("%d",&a[i]);
	int key;
	scanf("%d",&key);
	for(i=0;i<=4;i++)
	{
		if(a[i]==key)
		{
			flag=1;//1表示数组中存在key
			j=i;//并记录下位置
			break;
		}
	}
	if(flag==0)
		printf("not found\n");//没有key
	else
	{
		for(i=0;i<=4;i++)
		{
			if(i==j)
				continue;//跳过该位置
			if(i==4)
				printf("%d\n",a[i]);//最后一个数没有空格
			else
				printf("%d ",a[i] );
		}

	}
	return 0;
}