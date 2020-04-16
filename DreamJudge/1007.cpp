#include <iostream>
using namespace std;
int main()
{
	int cnt=0;
	for(int i=100;i<=1000;i++)
	{
		if(i%5==0&&i%6==0)
		{
			cnt++;
			if(cnt%10==0)
				cout<<i<<endl;
			else
				cout<<i<<' ';
		}
	}
	return 0;
}
