#include <iostream>
using namespace std;
int main()
{
	int k;
	cin>>k;
	double sum=0;
	int i;
	for(i=1;sum<=k;i++)
	{
		sum=sum+1.0/i;
	}
	cout<<i-1<<endl;
	return 0;
	
}
