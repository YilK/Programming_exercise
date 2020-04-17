#include <iostream>
using namespace std;
struct node 
{
	int data;
	struct node *next;
};
int main()
{
	node a[5];
	int i=0;
	for(i=0;i<=4;i++)
	{
		cin>>a[i].data;
	}
	int j;
	for(i=0;i<=3;i++)
	{
		int min=i;
		for(j=i;j<=4;j++)
			if(a[j].data<a[min].data)
				min=j;
		if(min!=i)
		{
			int temp=a[min].data;
			a[min].data=a[i].data;
			a[i].data=temp;
		}
	}
	for(i=0;i<=4;i++)
		cout<<a[i].data<<' ';
	
	
	return 0;
} 
