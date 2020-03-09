#include <iostream>
using namespace std;
int main()
{
	double d1,d2,h,p;
	cin>>d1>>d2>>h>>p;
	d1=d1/2;
	d2=d2/2;
	double res;
	res=3.14*p*h*(d2*d2-d1*d1);
	printf("%.2lf\n",res);
	return 0;
}
