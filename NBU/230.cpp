#include <iostream>
#include <algorithm>
using namespace std;
bool cmp(int a,int b){

	return a>b;
}
int main()
{
	int a[4];
	for(int i=0;i<4;i++)
		cin>>a[i];
	sort(a,a+4,cmp);
	for(int i=0;i<4;i++)
	{
		if(i==3)
			cout<<a[i]<<endl;
		else
			cout<<a[i]<<' ';
	}
	return 0;
} 
