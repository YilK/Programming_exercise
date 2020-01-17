#include <iostream>
using namespace std;
int main()
{
	int a,sum=0,b;
	cin>>a;
	for(int i=1;i<=5;i++)
	{
		cin>>b;// ‰»Î 
		if(b<a)//≈–∂œ 
			sum+=b;
	}
	cout<<sum<<endl;
	return 0; 
}
