#include <iostream>
using namespace std;
int main()
{
	double a,b;
	cin>>a>>b;
	if(a>b)
	{
		double temp=a;
		a=b;
		b=temp;
	}
	printf("%.2lf %.2lf\n",a,b);
	return 0;
}
