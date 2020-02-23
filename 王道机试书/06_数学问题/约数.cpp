#include <iostream>
using namespace std;
int cal(int x)
{
	int num=0;
	int i=1;
	for(i=1;i*i<x;i++)
	{
		if(x%i==0)
			num=num+2;
	}
	if((i*i)==x)
		num++;
	return num;
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		cout<<cal(a[i])<<endl;
	}
	return 0;
}
