#include <iostream>
using namespace std;
int main()
{
	int a[30001]={0};
	int n,k;
	
	cin>>n>>k;
	int i,j;
	for(i=0;i<n;i++)
	{
		int num;
		cin>>num;
		if(a[num]==0)
			a[num]++; 
	}
	
	for(i=0;i<30001;i++)
	{
		if(a[i]==1)
		{
			k--;
			if(k==0)
			{
				cout<<i<<endl;
				return 0;
			}
		}
	}
	cout<<"NO RESULT";
	return 0;
	 
	
	
} 
