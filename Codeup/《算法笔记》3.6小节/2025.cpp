#include <iostream>
using namespace std;
int main()
{
	int n;
	string s1,s2;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s1>>s2;
		if(s1.size()>s2.size())
			cout<<s1<<" is longer than "<<s2;
		else if(s1.size()<s2.size())	
			cout<<s1<<" is shorter than "<<s2;
		else
			cout<<s1<<" is equal long to "<<s2;
		cout<<endl; 
	}
	return 0;
}
