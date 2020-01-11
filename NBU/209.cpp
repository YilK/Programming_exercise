#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int num=n,sum=0;
	int a,b=0;
	while(num!=0)
	{
		num=num/10;
		b++;
	}
	num=n;
	while(num!=0)
	{
		a=num%10;
		num=num/10;
		sum=sum+pow(a,b);
	}
	if(sum==n)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
//	cout<<b;
	return 0;
	
} 
