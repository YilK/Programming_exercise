#include <iostream>
using namespace std;
int main()
{
	int l,r;
	while(cin>>l>>r)
	{
		int res=0;
		for(int i=l;i<=r;i++)
		{
			int k=i;
			while(k!=0)
			{
				if(k%10==2)
				{
					res++;
				}
				k=k/10;
			}
		}
		cout<<res<<endl;
	}
	return 0;
}
