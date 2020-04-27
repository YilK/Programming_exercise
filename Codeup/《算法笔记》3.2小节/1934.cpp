#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int a[1000];
		for(int i=0;i<n;i++)
			cin>>a[i];
		int res=-1;
		int num;
		cin>>num;
		for(int i=0;i<n;i++)
			if(a[i]==num)
				res=i;
		cout<<res<<endl; 
	}
	return 0;
}
