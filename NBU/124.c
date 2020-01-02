#include <stdio.h>
#include <string.h>
#define ll __int64
ll a[51];
ll fun(int n)
{
	if(n==1||n==2)
		return 1;
	if(!a[n])
		a[n]=fun(n-1)+fun(n-2);
	return a[n];
}
int main()
{
	int n;
	memset(a,0,sizeof(a));
	while(scanf("%d",&n)!=EOF)
	{
		printf("%d\n",fun(n) );
	}
	return 0;
}