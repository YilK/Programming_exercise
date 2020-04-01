#include <iostream>
using namespace std;
int main()
{
	int a[10]={0};
	int m,n;
	cin>>m>>n;
	int i;
	for(i=m;i<=n;i++)
	{
		int k=i;
		while(k!=0)
		{
			a[k%10]++;
			k=k/10;
		}
	} 
	for(i=0;i<=9;i++)
		cout<<a[i]<<' ';
	return 0;
}
