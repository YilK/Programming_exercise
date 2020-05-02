#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s1;
	string s2;
	getline(cin,s1);
	getline(cin,s2);
	int i;
	for(i=0;i<s1.size();i++)
	{
		if(s2.find(s1[i])==string::npos)
			cout<<s1[i];
	} 
	cout<<endl;
	return 0;
}
