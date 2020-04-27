#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		if(n==0)
			break;
		int a[1003];
		for(int i=0;i<n;i++)
			cin>>a[i];
		int num,res=0;
		cin>>num;
		for(int i=0;i<n;i++)
			if(a[i]==num)
				res++;
		cout<<res<<endl;
	}
	return 0;
} 
