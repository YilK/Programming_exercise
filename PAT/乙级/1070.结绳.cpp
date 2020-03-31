#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	double a[10001]={0};
	cin>>n;
	int i;
	for(i=0;i<n;i++)
		cin>>a[i];
	int j=0;
	sort(a,a+n);
	double sum=0;
	sum=a[0]/2+a[1]/2;
	for(i=2;i<n;i++)
		sum=sum/2+a[i]/2;
	cout<<int(sum)<<endl;
	return 0;

}