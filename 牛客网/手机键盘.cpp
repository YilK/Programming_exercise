#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str;
	int key[26]={1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};
	int help[26]={1,1,1,2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,6,7,7,7,8,8,8,8};
	while(cin>>str)
	{
		int count=key[str[0]-'a'];
		for(int i=1;i<str.size();i++)
		{
			count+=key[str[i]-'a'];
			if(help[str[i]-'a']==help[str[i-1]-'a'])
				count+=2;
		}
		cout<<count<<endl;
	}
	return 0;
}
//其实需要技巧的，这个技巧不容易想到 
