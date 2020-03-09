#include <iostream>
using namespace std;
int cal(int n)
{
	return n*(n+1)*(n+2);
}
int main()
{
	int m;
	cin>>m;
	int sum=0;
	for(int i=1;i<=m;i=i+2)
	{
		sum=sum+cal(i);
	}
	cout<<sum<<endl;
	return 0;
} 
