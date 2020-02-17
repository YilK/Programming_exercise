#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int a[26]={0};
    for(int i=0;i<s.size();i++)
        if(isupper(s[i]))
        {
            a[s[i]-'A']++;
        }
    for(int i=0;i<26;i++)
        printf("%c:%d\n",'A'+i,a[i]);
    return 0;
}
