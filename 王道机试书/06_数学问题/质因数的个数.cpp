#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> v;
	int a[10001]={0};
	for(int i=2;i*i<=10000;i++)
	{
		if(a[i]==0)
		{
			for(int j=i*i;j<=10000;j=j+i)
			{
				a[j]=1;
			}
		}
	}
	for(int i=2;i<=10000;i++)
	{
		if(a[i]==0)
			v.push_back(i);
	}
	int n;
	while(cin>>n)
	{
		int num=0;
		for(int i=0;i<v.size();i++)
		{
			while(n%v[i]==0)
			{
				n=n/v[i];
				num++;
			}
		}
		if(n>1)
			num++;
		cout<<num<<endl;
	}
	return 0;
}
