#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int sum1=0,sum2=0;
	for(int i=1;i<=n;i++)//输出偶数
	{
		if (i%2==0)
		{
			/* code */
			sum1=sum1+i;//偶数和
		}
		else
			sum2=sum2+i;//奇数和
	}
	printf("%d\n",sum2 );//输出偶数和
	printf("%d\n",sum1 );//输出奇数和
	return 0;
}