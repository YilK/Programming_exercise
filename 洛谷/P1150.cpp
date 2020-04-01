#include <iostream>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	if(k>n)
	{
		cout<<n<<endl;
		return 0;
	}
	int all=n;
	int res=n;
	while(res!=0)
	{
		if(res/k!=0)
		{
			all=all+res/k;
			res=res%k+res/k;
		}
		else
		{
			res=res/k;
		}
	}
	cout<<all<<endl;
	return 0;
}

