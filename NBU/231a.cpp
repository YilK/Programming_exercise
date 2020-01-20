#include <iostream>
using namespace std;
int main()
{
	int x;
	cin>>x;
	for(int i=2000;i<=2000+x;i++)
	{
		if(i%4==0&&i%100!=0||i%400==0)
		{
			cout<<i<<endl;
		}
	}
	return 0;
}
