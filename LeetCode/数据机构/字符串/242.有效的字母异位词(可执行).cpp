#include <iostream>
using namespace std;
bool isAnagram(string s, string t) {
    if(s.size()!=t.size())
        return false;
    int a[26]={0};
    for(int i=0;i<s.size();i++)
    {
        a[s[i]-'a']++;
        a[t[i]-'a']--;
    }
    for(int i=0;i<26;i++)
        if(a[i]!=0)
            return false;
    return true;
}
int main()
{
	string s,t;
	cin>>s>>t;
	if(isAnagram(s,t)==true)
		cout<<1;
	else
		cout<<0;
	return 0;
}
