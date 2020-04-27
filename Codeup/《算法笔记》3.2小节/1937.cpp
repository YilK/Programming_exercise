#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[102];
	int i;
	for(i=0;i<n;i++)
		cin>>a[i];
	int m;
	cin>>m;
	int b[102];
	for(i=0;i<m;i++)
		cin>>b[i];
	int j;
	for(i=0;i<m;i++)
	{
		int flag=1;
		for(j=0;j<n;j++)
		{
			if(b[i]==a[j])
			{
				cout<<"YES"<<endl;
				flag=0;
			}
		}
		if(flag==1)
			cout<<"NO"<<endl; 
	}
	return 0;
}
