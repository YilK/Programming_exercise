#include <iostream>
#include <string>
using namespace std;

void converse(string &s)
{
	int i=0,j=s.size()-1;
	while(i<=j)
	{
		char temp=s[i];
		s[i]=s[j];
		s[j]=temp;
		i++;j--;
	}
}
using namespace std;
int main()
{
	string s;
	cin>>s;
	converse(s);
	cout<<s<<endl;
	return 0;
}
