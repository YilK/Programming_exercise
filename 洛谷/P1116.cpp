#include <iostream>
using namespace std;
int main()
{
	int a[10001];
	int n;
	cin>>n;
	int i;
	int res=0;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n-1;i++)
	{
		int flag=0;
		for(int j=n-1;j>i;j--)
		{
			if(a[j-1]>a[j])
			{
				res++;
				int temp=a[j-1];
				a[j-1]=a[j];
				a[j]=temp;
				flag=1;
			}
		}
		if(flag==0)
			break; 
		
	} 
	cout<<res<<endl;
	return 0;
}
