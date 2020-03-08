#include <iostream>
using namespace std;

int main()
{
	double a,b,c;

	cin>>a>>b>>c;
	if(a+b<=c||a+c<=b||b+c<=a)
		cout<<"NO"<<endl;
	else if(a==b&&a==c&&c==a)
		cout<<"DB"<<endl;
	else if(a==b||a==c||b==c)
		cout<<"DY"<<endl;
	else if(a*a+b*b==c*c||a*a+c*c==b*b||c*c+b*b==a*a)
		cout<<"ZJ"<<endl;
	else
		cout<<"OTHER"<<endl;
	return 0;
}