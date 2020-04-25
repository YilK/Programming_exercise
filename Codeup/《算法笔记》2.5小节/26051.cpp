#include <iostream>
using namespace std;
int main()
{
	int a[10];
	int i;
	for(i=0;i<10;i++)//input
		cin>>a[i]; 
	int j;
	for(i=0;i<10-1;i++)
	{
		int flag=1;
		for(j=1;j<10-i;j++)
		{
			if(a[j]<a[j-1])
			{
				int temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
				flag=0;
			}
		} 
		if(flag==1)
			break;
	}
	for(i=0;i<10;i++)
		cout<<a[i]<<endl;
	return 0;
}
