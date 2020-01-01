#include <stdio.h>
double f(int n)
{
	double result=1;
	int i;
	for(i=1;i<=n;i++)
		result=result*i;
	return result;
}
int main()
{
	int N,j,m=0;
	int a[100];
	scanf("%d",&N);
	for(j=0;j<12;j++)
		a[j]=f(j+1);//得到1-12的阶乘然后存储
	for(j=11;j>=0;j--)
	{
		if(N==a[j])
			m++;
		else if(N>a[j])
			N=N-a[j];
	}
	if(m>0)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}