#include <iostream>
#include <cmath>
using namespace std;
int judge(int n)
{
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0)	return -1;
	return 1;
}
int main()
{
	int n;
	while(cin>>n)
	{
		if(judge(n)==-1)
			cout<<"no"<<endl;
		else
			cout<<"yes"<<endl;
	}
	return 0;
}
