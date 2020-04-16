#include <iostream>
#include <vector>
using namespace std;
void ppp(vector<int> &v)
{
	int i,j;
	for(i=0;i<v.size()-1;i++)
	{
		int min=i;
		for(j=i;j<v.size();j++)
			if(v[j]<v[min])
				min=j;
		if(min!=i)
		{
			int num=v[min];
			v[min]=v[i];
			v[i]=num;
		}
	}
	
}
int main()
{
	int n;
	cin>>n;
	int num;
	int i;
	vector<int> v1;
	vector<int> v2;
	for(i=0;i<n;i++)
	{
		cin>>num;
		if(num%2==1)
			v1.push_back(num);
		else
			v2.push_back(num);
	}
	ppp(v1);
	ppp(v2);
	for(i=0;i<v1.size();i++)
		cout<<v1[i]<<' ';
	for(i=0;i<v2.size();i++)
		cout<<v2[i]<<' ';
	return 0;
}
