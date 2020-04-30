#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int num[104];
		int i,j;
		for(i=0;i<n;i++)
			cin>>num[i];
		for(i=0;i<n-1;i++)
		{
			int min=i;
			for(j=i+1;j<n;j++)
				if(num[j]<num[min])
					min=j;
			if(min!=i)
			{
				int temp=num[min];
				num[min]=num[i];
				num[i]=temp;
			}
		}
		for(i=0;i<n;i++)
			cout<<num[i]<<' ';
		cout<<endl;
	} 
	return 0;
}
