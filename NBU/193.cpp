#include <stdio.h>
#include <vector>
using namespace std;
int main()
{
	int n,m,k;
	scanf("%d %d %d",&n,&m,&k);
	int a[n];
	vector<int> v;
	int i,count=1,j=m-1;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=m-1;count<=k;i++)
	{
		count++;
		v.push_back(a[i]);
	}
//	for(i=0;i<v.size();i++)
//		printf("%d ",v[i]);
	for(i=v.size()-1;i>=0;i--)
	{
		a[j]=v[i];
		j++;
	}
	for(i=0;i<n;i++)
		if(i==n-1)
			printf("%d\n",a[i]);
		else 
			printf("%d ",a[i]);
	return 0;
 } 
