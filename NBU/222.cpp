#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,x;
	cin>>n;
	x=sqrt(n);
	for(int i=1;i<=x;i++)
	{
		for(int j=i;j<=x;j++)
			if(i*i+j*j==n)
				cout<<i<<' '<<j<<endl;
	}
	
	return 0;
}
