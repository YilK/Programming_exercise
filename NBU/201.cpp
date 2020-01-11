#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s,s1;
	getline(cin,s1);
	s=s1;
	for(int i=1;i<5;i++)
	{
		getline(cin,s1);
		if(s.size()>s1.size())
		{
			s=s1;
		}
	}
	cout<<s<<endl;
	return 0;
}
