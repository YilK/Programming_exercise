#include <iostream>
using namespace std;
int main()
{
	int a[10];
	int i;
	for(i=0;i<10;i++)
		cin>>a[i];
	for(int i=0;i<10-1;i++)
	{
		int min=i;
		for(int j=i+1;j<10;j++)
			if(a[j]<a[min])
				min=j;
		if(min!=i)
		{
			int temp=a[min];
			a[min]=a[i];
			a[i]=temp;			
		}
	}
	for(i=0;i<10;i++)
		cout<<a[i]<<endl;
	return 0; 
} 
