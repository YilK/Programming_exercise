#include <stdio.h>
void mysort(int a[],int n)
{
	int min,temp;;
	for(int i=0;i<n-1;i++)
	{
		min=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[min]>a[j])
				min=j;
		}
		if(min!=i)
		{
			temp=a[min];
			a[min]=a[i];
			a[i]=temp;
		}
	}
}
int main()
{
	int x[1000];
	int i,n,j,m,t;
	scanf("%d",&n);//输入数据的个数
	for(i=0;i<n;i++)
		scanf("%d",&x[i]);//输入数据
	mysort(x,n);   //调用排序函数
	for(i=0;i<n-1;i++)
		printf("%d ",x[i]);
	printf("%d\n",x[n-1]);
    return 0;
}