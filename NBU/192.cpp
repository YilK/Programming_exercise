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
	for(j=1;j<n;j++)//ɾ��Ԫ�صĴ��� 
	{
		count=0;//count=3ʱ˵��Ҫɾ��Ԫ�� 
		for(i=m;;i++)
		{
			i=i%n;//�±� 
			if(a[i]!=0)
			{
				count++;
			}
			if(count==3)
			{
				a[i]=0;//���Ϊ0˵����Ԫ��ɾ�� 
				m=(i+1)%n;//��¼��һ�ο�ʼ����� 
				break;
			}
		}
	}
	for(i=0;i<n;i++)
		if(a[i]!=0)
			printf("%d\n",a[i]);
	return 0;
}
