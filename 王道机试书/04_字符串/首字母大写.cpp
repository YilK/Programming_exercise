#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        if(i==0)
            s[i]=toupper(s[i]);
        else
        {
            if(s[i-1]==' '||s[i-1]=='\t'||s[i-1]=='\r'||s[i-1]=='\n')
                s[i]=toupper(s[i]);
        }
    }
    cout<<s;
    return 0;
}
