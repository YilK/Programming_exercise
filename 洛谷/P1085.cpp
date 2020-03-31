#include <iostream>
using namespace std;
int main()
{
	int a,b;
	int res=0;
	int resi=0;
	int i;
	for(i=1;i<=7;i++)
	{
		cin>>a>>b;
		if(a+b>res)
		{
			res=a+b;
			resi=i;
		}
	}
	cout<<resi<<endl;
	return 0;
}
