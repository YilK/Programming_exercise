#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a,b,c,d,e;
	cin>>a>>b>>c>>d;
	cout<<a-b<<' ';
	e=pow(1+c/12,-d);
	cout<<c/12*(a-b)/(1-e)<<endl;
	return 0;
}
