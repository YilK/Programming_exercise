#include <iostream>
using namespace std;
int main()
{
	int a[10001]={0};
	int l,m;
	cin>>l>>m;
	int all=0;
	int i;
	for(i=0;i<m;i++)
	{
		int p,q;
		cin>>p>>q;
		for(int j=p;j<=q;j++)
			a[j]=1;
	}
	for(i=0;i<=l;i++)
		if(a[i]==0)
			all++;
	cout<<all<<endl;
	return 0; 
}
