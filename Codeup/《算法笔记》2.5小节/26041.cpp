#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i,j;
	int a[11][11]={{0}};//size of arrary
	a[1][1]=1;
	for(i=2;i<=10;i++)
	{
		for(j=1;j<=i;j++)
			a[i][j]=a[i-1][j]+a[i-1][j-1]; 
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
			cout<<a[i][j]<<' ';
		cout<<endl;
	}
	return 0;
}
