#include <iostream>
using namespace std;
int cal(int x)
{
	if(x==1||x==0)
		return 1;
	else
		return cal(x-1)+cal(x-2);
}
int main()
{
	int n;
	while(cin>>n)
	{
		cout<<cal(n)<<endl;
	}
	return 0;
}
