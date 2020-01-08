#include <stdio.h>
int judge(int a)
{
	int flag=0;
	for(int i=2;i<a;i++)
	{
		if((a%i)==0){
			flag=1;
			break;
		}
	}
	if(flag==1)
		return 0;
	else 
		return 1; 
}
int main()
{
	int n;
	int a=0,b=0;
	scanf("%d",&n);
	for(int i=2;i<=n/2;i++)
	{
		if(judge(i)==1&&judge(n-i)==1)
		{
			if((b-a)<=(n-2*i))
			{
				b=n-i;
				a=i;
			}
		}
	}
	printf("%d=%d+%d\n",n,a,b);
	return 0;
	
} 
