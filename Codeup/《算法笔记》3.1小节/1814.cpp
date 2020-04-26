#include <iostream>
using namespace std;
int main()
{
	int l,m;
	while(cin>>l>>m)
	{
		if(l==0&&m==0)
			break;
		int res=0;
		int a[100001]={0};
		int i;
		for(i=1;i<=m;i++)
		{
			int c,d;
			cin>>c>>d;
			for(int j=c;j<=d;j++)
				a[j]=1;
		}
		for(i=0;i<=l;i++)
			if(a[i]==0)
				res++;
		cout<<res<<endl;
	}
	return 0;
} 
