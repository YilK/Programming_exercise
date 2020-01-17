#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	int suma=0,sumb=0;
	for(int i=1;i<a;i++)
	{
		if(a%i==0)
			suma+=i;
	}
	for(int i=1;i<b;i++)
	{
		if(b%i==0)
			sumb+=i;
	}
	if(suma==b&&sumb==a)
		cout<<'1'<<endl;
	else
		cout<<'0'<<endl;
	return 0;
 } 
