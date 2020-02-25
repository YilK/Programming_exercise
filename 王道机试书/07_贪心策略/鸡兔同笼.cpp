#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		if(a%2==1||a==0)
			cout<<0<<' '<<0<<endl;
		else
		{
			int min=a/4+a%4/2;
			cout<<min<<' ';
			cout<<a/2<<endl;
		}	
	}
	return 0;
}
