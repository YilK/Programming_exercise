#include <iostream>
using namespace std;
int a[100001];
int main()
{
	int a0,a1,p,q,k;
	cin>>a0>>a1>>p>>q>>k;
	a[0]=a0;
	a[1]=a1;
	for(int i=2;i<=k;i++)
	{
		a[i]=(p*a[i-1]+q*a[i-2])%10000;
	}
	cout<<a[k]<<endl;
	return 0;

}