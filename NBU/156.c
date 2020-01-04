#include <stdio.h>
int main()
{
	int a[10];
	int i,j,max,temp;
	for(i=0;i<=9;i++)
		scanf("%d",&a[i]);
	//进行排序
	for(i=0;i<=8;i++)
	{
		max=i;
		for(j=i+1;j<=9;j++)
		{
			if(a[max]<a[j])
				max=j;
		}
		if(max!=i)
		{
			temp=a[i];
			a[i]=a[max];
			a[max]=temp;
		}
	}
	for(i=0;i<=9;i++)
	{
		if(i==9)
			printf("%d\n", a[i]);
		else
			printf("%d ",a[i]);
	}
	return 0;
}