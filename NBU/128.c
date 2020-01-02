#include <stdio.h>
int judege(int n)//判断此数是否是质数
{
	int i,flag=0;
	for(i=2;i<n;i++)
	{
		if (n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)	return 1;
	else return 0;//返回0代表此数为质数
}
int main()
{
	int n;
	scanf("%d",&n);
	int i,j;
	for(j=1;;j++)
	{
		for(i=2;i<=n;i++)
		{
			if(judege(i)==0)
			{
				if(n%i==0){
					n=n/i;
					if(n==1)
						printf("%d\n",i );
					else 
						printf("%d ",i);
					break;
				}
			}	
		}
		if(n==1)
			break;
	}
	return 0;
}