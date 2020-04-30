#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		if(n==0)
			break;
		int a[10003];
		int i,j;
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=0;i<n-1;i++)
		{
			int min=i;
			for(j=i+1;j<n;j++)
				if(a[j]<a[min])
					min=j;
			if(min!=i)
			{
				int temp=a[min];
				a[min]=a[i];
				a[i]=temp;
			}
		}
		if(n%2!=0)
			cout<<a[n/2];
		else
			cout<<(a[n/2]+a[n/2-1])/2;
		cout<<endl;
	}
	return 0;
}
