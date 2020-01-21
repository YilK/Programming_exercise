#include <iostream>
using namespace std;
int main()
{
	int a,b;
	int sum=0;
	for(int i=1;i<=3;i++)
	{
		cin>>a>>b;
		if(a==0)
		{
			sum+=b*4;
		}
		else if(a==1)
		{
			sum+=b*3;
		}
		else if(a==2)
			sum+=b*1;
	}
	cout<<sum<<endl;
	return 0;
 } 
