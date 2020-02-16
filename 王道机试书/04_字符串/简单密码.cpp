#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s))
    {
        if(s=="ENDOFINPUT")
            break;
        getline(cin,s);
        for(int i=0;i<s.size();i++)
        {
            if(isupper(s[i]))
                s[i]=(s[i]-'A'-5+26)%26+'A';
        }
        cout<<s<<endl;
        getline(cin,s);
        return 0; 
    }
}
