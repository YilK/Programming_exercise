#include <stdio.h>
#define LEN 10
int max(int x[],int n)
{
	int m=x[0];
	int i;
	for(i=1;i<=9;i++)
		if(m<x[i])
			m=x[i];
	return m;
}
int min(int x[],int n)
{
	int m=x[0];
	int i;
	for(i=1;i<=9;i++)
		if(m>x[i])
			m=x[i];
	return m;
}
int main()
{
    int x[LEN],maxnum,minnum,i;
	for(i=0;i<LEN;i++)
		scanf("%d",&x[i]);
	maxnum=max(x,LEN); //调用函数求最大值 
	minnum=min(x,LEN); //调用函数求最小值  
    printf("%d\n%d\n",maxnum,minnum);
	return 0;
}