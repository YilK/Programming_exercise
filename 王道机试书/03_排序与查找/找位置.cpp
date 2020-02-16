#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    map<char,int> m;
    for(int i=0;i<s.size();i++)
    {
        m[s[i]]++;
    }
	for(int i=0;i<s.size();i++)
	{
		if(m[s[i]]!=1)
		{
			for(int j=0;j<s.size();j++)
			{
				if(s[j]==s[i]){
					cout<<s[i]<<':'<<j;
					m[s[i]]--;
					if(m[s[i]]>=1)
						cout<<',';
				}
			} 
			cout<<endl;
			m[s[i]]=1;
		}
	}
	return 0;
}
