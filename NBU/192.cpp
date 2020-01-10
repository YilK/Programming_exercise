#include <stdio.h>
int main()
{
	int n,i,j,count,m=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		a[i]=i+1;
	}
	for(j=1;j<n;j++)//删除元素的次数 
	{
		count=0;//count=3时说明要删除元素 
		for(i=m;;i++)
		{
			i=i%n;//下标 
			if(a[i]!=0)
			{
				count++;
			}
			if(count==3)
			{
				a[i]=0;//标记为0说明该元素删除 
				m=(i+1)%n;//记录下一次开始的起点 
				break;
			}
		}
	}
	for(i=0;i<n;i++)
		if(a[i]!=0)
			printf("%d\n",a[i]);
	return 0;
}
