#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int a[1001]={0};
	int m;
	cin>>m;
	int i;
	int num;
	vector<int> v;
	for(i=0;i<m;i++)
	{
		cin>>num;
		a[num]=1;
	}
	num=0;
	for(i=0;i<=1000;i++)
	{
		if(a[i]!=0)
		{
			v.push_back(i);
			num++;
		}
	}
	cout<<num<<endl;
	for(i=0;i<v.size();i++)
		cout<<v[i]<<' ';
	return 0;
}
