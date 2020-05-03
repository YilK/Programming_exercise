#include <iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n;
	int i;
	int a[100];
	a[0]=1;
	a[1]=1;
	a[2]=1;
	for(i=3;i<100;i++)
		a[i]=a[i-1]+a[i-2];
	for(int k=1;k<=n;k++)
	{
		cin>>m; 
		for(i=1;i<=m;i++)
		{ 
			{
				for(int j=1;j<=m-i;j++)
					cout<<"  ";
				cout<<0<<' ';
				int z=i*2-2;
				for(int q=1;q<=z;q++)
					cout<<a[q]<<' ';
				cout<<endl;
			}
		}
	}
	return 0;
}
