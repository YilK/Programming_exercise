#include <iostream>
using namespace std;
int main()
{
	int a[100004]={0};
	int b[100004];
	int n;
	cin>>n;
	int i;
	for(i=0;i<n;i++)
	{
		cin>>b[i];
		a[b[i]]++;
	} 
	int flag=1;
	for(i=0;i<n;i++)
	{
		if(a[b[i]]==1)
		{
			cout<<b[i]<<endl;
			return 0; 
		}
	}
	cout<<"None"<<endl;
	return 0;
} 
