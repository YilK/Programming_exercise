#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int a[12][12];
		int i,j;
		vector<int> v;
		for(i=1;i<=n;i++)
		{	
			int num=0;
			for(j=1;j<=n;j++)
			{	
				cin>>a[i][j];
				num+=a[i][j];
			}
			v.push_back(num);
		}
		for(i=1;i<=n;i++)
		{	
			int num=0;
			for(j=1;j<=n;j++)
			{	
				num+=a[j][i];
			}
			v.push_back(num);
		}
		int b=0;
		for(i=1;i<=n;i++)
		{
			b+=a[i][i];
		}
		v.push_back(b);
		b=0;
		for(i=1;i<=n;i++)
		{
			b+=a[i][n+1-i];
		}
		v.push_back(b);
		int m=v.size();
		for(i=0;i<m-1;i++)
		{
			int min=i;
			for(j=i+1;j<m;j++)
				if(v[j]<v[min])
					min=j;
			if(min!=i)
			{
				int temp=v[min];
				v[min]=v[i];
				v[i]=temp;
			}
		}
		for(i=m-1;i>=0;i--)
			cout<<v[i]<<' ';
		cout<<endl;
	}
	return 0;
}
