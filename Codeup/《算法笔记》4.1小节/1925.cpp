#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int num[1004];
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
		cout<<num[n-1]<<endl;
		if(n==1)
			cout<<-1;
		else
			for(i=0;i<n-1;i++)
				cout<<num[i]<<' ';
		cout<<endl;
	} 
	return 0;
}
