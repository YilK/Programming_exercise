#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int a[100000]={0};
int main()
{
	int n;
	cin>>n;
	int i;
	vector<int> v1;
	vector<int> v2;
	for(i=0;i<n;i++)
	{
		int p,q;
		cin>>p>>q;
		a[p]=q;
		a[q]=p;
	}
	int m;
	cin>>m;
	for(i=0;i<m;i++)
	{
		int num;
		cin>>num;
		v1.push_back(num);
	}
	for(i=0;i<m;i++)
	{
		int num=a[v1[i]];
		int flag=1;
		for(int j=0;j<m;j++)
		{
			if(num==v1[j])
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
			v2.push_back(v1[i]);
	}
	sort(v2.begin(),v2.end());
	cout<<v2.size()<<endl;
	for(i=0;i<v2.size();i++)
	{
		if(i==v2.size()-1)
			printf("%05d",v2[i]);
		else
			printf("%05d ",v2[i]);
	}
	
	return 0;
}
