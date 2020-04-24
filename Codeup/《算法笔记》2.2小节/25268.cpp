#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a,b,c;
	cin>>a>>b>>c;
	double d=b*b-4*a*c;
	if(a==0)
		return 1;
	if(d<=0)
		return 1;
	else
	{
		double r1,r2;
		r1=(-b+sqrt(d))/2*a;
		r2=(-b-sqrt(d))/2*a;
		printf("r1=%7.2lf\n",r1);
		printf("r2=%7.2lf\n",r2);
		return 0;
	}
}
