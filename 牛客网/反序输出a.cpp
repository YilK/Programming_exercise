#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str;
	while(cin>>str)
	{
		int n=str.size();
		for(int i=0;i<n/2;i++)
		{
			char s;
			s=str[i];
			str[i]=str[n-i-1];
			str[n-i-1]=s;
		}
		cout<<str<<endl;
	}
	return 0;
}
