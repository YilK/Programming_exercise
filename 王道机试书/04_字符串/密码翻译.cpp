#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    string s;
	getline(cin,s);
    for(int i=0;i<s.size();i++)
        if(isalpha(s[i]))
            s[i]=s[i]+1;
    cout<<s;
    return 0;
   
}
