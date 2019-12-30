#include <stdio.h>
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int i;//表示鸡的数量
	int flag=0;
	for(i=0;i<=n;i++)
	{
		if(i*2+(n-i)*4==m){
			flag=1;
			printf("%d %d\n",i,n-i);
		}
	}
	if(flag==0)
		printf("NO answer\n");
	return 0;
}