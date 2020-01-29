#include <iostream>
using namespace std;
int main()
{
	string s1;
	cin>>s1;
	int a=0;
	if(s1[s1.size()-3]=='-')
	{
			a=a*10+(s1[s1.size()-2]-'0');
			a=a*10+(s1[s1.size()-1]-'0');
//			cout<<a<<endl;
	}
	return 0; 
}
