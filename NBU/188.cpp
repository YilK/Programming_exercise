#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int i,a;
	vector<int> v1;
	vector<int> v2(n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		v1.push_back(a);
	}
	int j;
	for(i=0;i<n;i++)
	{
		j=(i+m)%n;
		v2[j]=v1[i]; 
	}
	for(i=0;i<v2.size();i++)
		if(i==n-1)
			cout<<v2[i]<<endl;
		else
			cout<<v2[i]<<' ';
	return 0;
	
}
