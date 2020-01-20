#include <iostream>
using namespace std;
int judge(int n)
{
	int sum=0;
	int x=n;
	while(x!=0)
	{
		sum=sum+x%10;
		x=x/10;
	}
	if(sum==5)
		return 1;
	else 
		return 0;
}
int main()
{
	int a,b;
	int n;
	cin>>a>>b;
	for(int i=a;i<=b;i++)
	{
		if(judge(i)==1)
			cout<<i<<endl;
	}
	return 0;
}
