#include <iostream>//score 15  这题是一个数学问题 
using namespace std;
int main()
{
	int n;
	cin>>n;
	double sum=0.0,temp;
	for(int i=1;i<=n;i++)
	{
		cin>>temp;
		sum=sum+temp*i*(n-i+1);
	}
	printf("%.2f",sum);
	return 0;
}
