#include <iostream>
using namespace std;
int main()
{
	for(int i=0;i<64;i++)
	{
		int num[6]={0};
		int cnt=0;
		int k=i;
		while(k!=0)
		{
			num[cnt]=k%2;
			k=k/2;
			cnt++;
		}
		for(int j=5;j>=0;j--)
			cout<<num[j];
		cout<<endl;
		cout<<i<<endl; 
	}
	return 0;
}
