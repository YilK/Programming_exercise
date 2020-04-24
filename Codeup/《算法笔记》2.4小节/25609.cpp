#include <iostream>
using namespace std;
int main()
{
	int a[30];
	a[0]=1;
	a[1]=1;
	a[2]=2;
	double res=0;
	for(int i=3;i<=20;i++)
		a[i]=a[i-1]+a[i-2];
	for(int i=1;i<=20;i++)
	{
		res+=double(a[i]+a[i-1])/a[i];
	}	
	printf("%.6lf\n",res);
	return 0;
}
