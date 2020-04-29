#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int i=0,j=s.size()-1;
	int flag=1;
	while(i<=j)
	{
		if(s[i]!=s[j])
		{
			flag=0;
			break;
		}
		i++;j--;
	}
	if(flag==0)
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;
	return 0;
}
