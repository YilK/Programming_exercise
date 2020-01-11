#include <stdio.h>
#include <vector>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	int i;
	vector<int> v;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]!=0)
			v.push_back(a[i]);
	}
	for(i=0;i<v.size();i++)
	{
		if(i==v.size()-1)
			printf("%d\n",v[i]);
		else 
			printf("%d ",v[i]);
	}
	return 0;
}
