#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
	string a;
	string b;
	string c;
	cin>>a>>b;
	for(int i=0;i<a.size();i++)
		if(b.find(a[i])==string::npos&&c.find(toupper(a[i]))==string::npos)
			c+=toupper(a[i]);
	cout<<c;
	return 0;
} 
