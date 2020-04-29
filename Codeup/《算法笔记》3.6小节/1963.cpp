#include <iostream> 
#include <string>
using namespace std;
int main()
{
	string s,s1;
	char c; 
	while(getline(cin,s))
	{
		cin>>c;
		getline(cin,s1);
		int i;
		for(i=0;i<s.size();i++)
		{
			if(s[i]!=c)
				cout<<s[i];
		}
		cout<<endl;
	}
	return 0;
}
