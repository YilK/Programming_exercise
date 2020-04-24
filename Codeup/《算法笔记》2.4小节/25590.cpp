#include <iostream>
using namespace std;
int main()
{
	int res;
	int sum=0;
	for(int i=1;;i++)
	{
		sum+=i;
		if(sum>1000)
		{
			res=i;
			break;
		}
	}
	cout<<res<<endl;
	return 0;
}
