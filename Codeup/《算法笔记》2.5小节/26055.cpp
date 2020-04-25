#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s,max;
	for(int i=1;i<=3;i++)
	{
		cin>>s;
		if(s>max)
			max=s;
	}
	cout<<max<<endl;
	return 0;
}
