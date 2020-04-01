#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	int res=0;
	int a[26]={1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};
	int i;
	for(i=0;i<s.size();i++)
	{
		if(s[i]==' ')
			res++;
		if(s[i]>='a'&&s[i]<='z')
		{
			res+=a[s[i]-'a'];
		}
	} 	
	cout<<res<<endl;
	return 0;
	
}
