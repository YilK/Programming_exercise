#include <stdio.h>
int main()
{
	double a[8];
	int i,j,min;
	double temp,sum=0;
	for(i=0;i<=7;i++)//输入数据。利用数组保存
	{
		scanf("%lf",&a[i]);
	}
	//进行排序
	for(i=0;i<=6;i++)
	{
		min=i;
		for(j=i+1;j<=7;j++)
		{
			if(a[min]>a[j])
			{
				min=j;
			}
		}
		if(i!=min){
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
	for(i=1;i<=6;i++)
	{
		sum=sum+a[i];
	}
	printf("%.2lf\n",sum/6 );
	return 0;
}