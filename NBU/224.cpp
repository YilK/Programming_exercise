#include <iostream>
using namespace std;
int judge(int n)//判断是不是素数 
{
	int flag=0;
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
		return 0;//不是素数返回0
	else
		return 1;//是素数返回1 
}
int main()
{
	int n;
	cin>>n;
	int min=100000,a,b;
	for(int i=2;i<=n/2;i++)
	{
		if(judge(i)==1&&judge(n-i)==1)
		{
			if(min>n-2*i)
			{
				a=i;
				b=n-i;
				min=n-2*i;
			}
		}	
	} 
	cout<<a<<' '<<b<<endl;
	return 0;
	
}
