#include <stdio.h>
int main()//思路倒回去算就好
{
	int n;
	scanf("%d",&n);
	int sum=1,i;
	for(i=n;i>1;i--)
	{
		sum=(sum+1)*2;
	}
	printf("%d\n",sum );
	return 0;
}