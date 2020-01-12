#include <iostream>
using namespace std;
int main()
{
	int n;
	char a;
	cin>>n>>a;
	int k;
	if(n%2==1)
	{
		k=n+1;
	}
	else
		k=n;
	for(int i=1;i<=k/2;i++)
	{
		if(i==1||i==k/2)
			for(int j=1;j<=n;j++)
				cout<<a;
		else
			for(int m=1;m<=n;m++)
			{
				if(m==1||m==n)
					cout<<a;
				else
					cout<<' ';
			}
		cout<<endl;
	}
	return 0;
 } 
