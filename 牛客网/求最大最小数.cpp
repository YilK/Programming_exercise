#include <iostream>
using namespace std;
int num[100001];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>num[i];
	}
	for(int k=0;k<n;k++)
	{
		cout<<num[k];
	}
	int min=1000000;
	int max=-1000000;
	for(int j=0;j<n;j++)
	{
		if(min<num[j])
			min=num[j];
		if(max>num[j])
			max=num[j];
	}
	cout<<max<<' '<<min<<endl;
	return 0;
}
