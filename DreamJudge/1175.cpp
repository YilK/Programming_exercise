#include <iostream>
using namespace std;
int main()
{
	int l,m;
	while(cin>>l>>m)
	{	
		int a[10002]={0};
		int i;
		for(i=1;i<=m;i++)
		{
			int c,b;
			cin>>c>>b;
			for(int j=c;j<=b;j++)
				if(a[j]==0)
					a[j]=1;
		}
		int res=0;
		for(i=0;i<=l;i++)
			if(a[i]==0)
				res++;
		cout<<res<<endl;
	}
	return 0;
}
