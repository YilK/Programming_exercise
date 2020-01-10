#include <stdio.h>
int main()
{
	int n;
	int x;
	int sum1=0,sum2=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&x);
		if(x%2==0)
			sum1=sum1+x;//偶数和
		else
			sum2=sum2+x;//奇数和
	}
	printf("%d\n",sum2 );
	printf("%d\n",sum1 );
	return 0;
}