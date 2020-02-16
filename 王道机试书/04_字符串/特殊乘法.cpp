#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a;
    string b;
    int sum=0;
    cin>>a>>b;
    for(int i=0;i<a.size();i++)
        for(int j=0;j<b.size();j++)
        {
            sum=sum+(a[i]-'0')*(b[j]-'0');
        }
    cout<<sum;
    return 0;
}
