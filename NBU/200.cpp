#include<stdio.h>
#define N 10
double ave(double a[],int n)
{
	double r=0;
	for(int i=0;i<n;i++)
	{
		r=r+a[i];
	}
	return r/n;
}
int main()
{
	double a[N],x,res;
	int i,cnt=0;
	for(i=0;i<N;i++)
	{
		scanf("%lf",&x);
		if(x>0) {a[cnt]=x;cnt++;}
	}
    res=ave(a,cnt);   //调用函数求大于0的数的平均值
	printf("%.2lf\n",res);
	return 0;
}

