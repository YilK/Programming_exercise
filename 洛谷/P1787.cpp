#include <iostream>
#include <string> 
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s,ans;
	int x;
	int i=0;
	for(i=1;i<=n;i++)
	{
		cin>>s;
		if(s.size()>ans.size()||s.size()==ans.size()&&s>ans)
		{
			ans=s;
			x=i;
		}
	}
	cout<<x<<endl<<ans<<endl;

	return 0;
} 
