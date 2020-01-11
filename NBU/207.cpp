#include <stdio.h>
int main()
{
	int x,m,n;
	scanf("%d %d %d",&x,&m,&n);
	int num=0;
	for(int i=1;i<=n;i++)
	{
		num=num+x+(i-1)*m;
	}
	printf("%d\n",num);
	return 0;
}
