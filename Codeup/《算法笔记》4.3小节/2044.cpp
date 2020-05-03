#include <iostream>
using namespace std;
int a[23],n,count;
void search(int index,int sum)
{
	if(sum==0)
	{
		count++;
		return ;
	}
	if(index>n)
		return ;
	if(sum-a[index]>=0)
		search(index+1,sum-a[index]);
	search(index+1,sum);
}
int main()
{
	while(cin>>n)
	{
		count=0;
		for(int i=1;i<=n;i++)
			cin>>a[i];
		search(1,40);
		cout<<count<<endl; 
	}
	
}
