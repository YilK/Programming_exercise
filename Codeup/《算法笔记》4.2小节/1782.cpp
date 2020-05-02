#include <iostream>
using namespace std;
int main()
{
	int n,m;
	while(cin>>n>>m)
	{

		int a[209]={0};
		int b[209];
		int i;
		for(i=0;i<n;i++)
		{
			cin>>b[i];
			a[b[i]]++;
		} 
		for(i=0;i<n;i++)
		{
			if(a[b[i]]==1)
				cout<<"BeiJu"<<endl;
			else
				cout<<a[b[i]]-1<<endl; 
		}
	}
	return 0;
} 
