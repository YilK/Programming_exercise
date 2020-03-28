#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	double a,b;
	double max=0;
	int i;
	double res;
	for(i=1;i<=n;i++)
	{
		cin>>a>>b;
		res=sqrt(a*a+b*b);
		if(res>max)
			max=res;
	}
	printf("%.2lf\n",max);
	return 0;
}