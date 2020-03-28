#include <iostream>
using namespace std;
int main()
{
	int n;
	int a[100]={0};
	int i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		int num;
		int res=0;
		cin>>num;
		while(num!=0)
		{
			res+=num%10;
			num=num/10;
		}
		a[res]++;
	}
	int flag=1;
	int num=0;
	for(i=0;i<100;i++)
		if(a[i]!=0)
			num++;
	cout<<num<<endl;
	for(i=0;i<100;i++)
	{
		if(a[i]!=0)
		{
			if(flag==1)
			{
				cout<<i;
				flag=0;
			}
			else
				cout<<' '<<i;
		}
	}
	cout<<endl;
	return 0;
}