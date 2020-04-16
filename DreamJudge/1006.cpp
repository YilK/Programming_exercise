#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int i=0,j=s.size()-1;
	while(i<=j)
	{
		char c;
		c=s[i];
		s[i]=s[j];
		s[j]=c;
		i++;j--;
	}
	cout<<s<<endl;
	return 0;
}
