#include <iostream>
#include <string>
using namespace std;
int main()
{
	string num;
	cin>>num;
	int sum=0;
	for(int i=0;i<num.size();i++)
	{
		if(i==num.size()-1)
			cout<<num[i]<<endl;
		else
			cout<<num[i]<<' ';
		sum=sum+(num[i]-'0');
	}
	cout<<sum<<endl;
	return 0;
}
