#include <iostream>
using namespace std;
int main()
{
	int n;
	while(1)
	{
		int a[102]={0};
		cin>>n;
		if(n==0)
			break;
		int num;
		for(int i=1;i<=n;i++)
		{
			cin>>num;
			a[num]++;
		}
		int tag;
		cin>>tag;
		cout<<a[tag]<<endl;
	}
	return 0;
		
}
