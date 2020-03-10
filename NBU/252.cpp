#include <iostream>
using namespace std;
int main()
{
	int a[10]={0};
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		if(n>=0&&n<=9)
			a[n]++;
	}
	for(int i=0;i<=9;i++)
	{
		if(a[i]!=0)
			cout<<i<<':'<<a[i]<<endl;
	}
	return 0;
	
	
} 
