#include <iostream>
#include <string>
using namespace std;
struct node{
	int w;
	string s;
};
int main()
{
	int n;
	while(cin>>n)
	{
		node a[103];
		int i,j;
		for(i=0;i<n;i++)
			cin>>a[i].w>>a[i].s;
		for(i=0;i<n-1;i++)
		{
			int min=i;
			for(j=i+1;j<n;j++)
				if(a[j].w<a[min].w)
					min=j;
			if(min!=i)
			{
				node temp=a[min];
				a[min]=a[i];
				a[i]=temp;
			}
		}
		for(i=n-1;i>=0;i--)
			cout<<a[i].s<<endl;
	}
	return 0;
}
