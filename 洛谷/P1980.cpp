#include <iostream>
using namespace std;
int main()
{
	int n,x;
	cin>>n>>x;
	int i;
	int res=0;
	for(i=1;i<=n;i++)
	{
		int k=i;
		while(k!=0)
		{
			if(x==k%10)
				res++;
			k=k/10;	
		}
	}
	cout<<res<<endl;
	return 0;
}
