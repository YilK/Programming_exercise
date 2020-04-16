#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i,j;
	for(int i=1;i<=n;i++)
	{
		int a[104]={1};
		int num;
		cin>>num;
		for(j=1;j<=num;j++)
			cin>>a[j];
		int res=0;
		for(j=1;j<=num;j++)
		{
			if(a[j]>a[j-1])
				res+=(6*(a[j]-a[j-1]));
			else if(a[j]==a[j-1])
				res+=3;
			else
				res+=(4*(a[j-1]-a[j]));
			res+=3;
		}
		cout<<res<<endl;
	}
	return 0;
}
