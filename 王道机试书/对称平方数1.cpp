#include <iostream>
#include <string>
using namespace std;
int main()
{
    for(int i=0;i<=256;i++)
    {
        int a=i*i;
        int sum=0;
        while(a>0)
        {
            sum=sum*10+a%10;
            a=a/10;
        }
        if((i*i)==sum)
            cout<<i<<endl;
    }
}
