#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int flag=1;
	if(a%10!=b/10)
		flag=0;
	if(b%10!=c/10)
		flag=0;
	if(c%10!=d/10)
		flag=0;
	if(flag==0)
		cout<<"No"<<endl;
	else
		cout<<"Yes"<<endl;
	return 0;
}
