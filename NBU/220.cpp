#include <iostream>
using namespace std;
int main()
{
	int x;
	cin>>x;
	if(x<=20)
		cout<<0<<endl;
	else if(x<=40)
		cout<<(x-20)*2<<endl;
	else 
		cout<<(x-40)*5+40<<endl;
	return 0;
}
