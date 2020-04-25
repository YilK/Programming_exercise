#include <iostream>
using namespace std;
int main()
{
	int a[2][3];
	int i,j;
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
			cin>>a[i][j];
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{	
			cout<<a[j][i]<<' ';	
		}
		cout<<endl;
	
	}
}
