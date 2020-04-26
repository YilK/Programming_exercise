#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int a=0;int b=0;
		int num;
		for(int i=1;i<=n;i++)
		{
			cin>>num;
			if(num%2==0)
				a++;
			else
				b++;	
		}
		if(a>b)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}
	return 0;
}
