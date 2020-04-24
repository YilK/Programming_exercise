#include <iostream>
using namespace std;
int main()
{
	double a[3];
	cin>>a[0]>>a[1]>>a[2];
	for(int i=0;i<2;i++)
	{
		int min=i;
		for(int j=i+1;j<3;j++)
			if(a[j]<a[min])
				min=j;
		if(min!=i)
		{
			double temp=a[min];
			a[min]=a[i];
			a[i]=temp;
		}
	}
	printf("%.2lf %.2lf %.2lf\n",a[0],a[1],a[2]);
	return 0;
}
