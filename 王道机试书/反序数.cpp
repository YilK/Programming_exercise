#include <iostream>
using namespace std;
int main()
{
    for(int i=1000;i<=1111;i++)
    {
        int a=i;
        int sum=0;
        //¼ÆËã·´ÐòÊý
        while(a>0)
        {
            sum=sum*10+a%10;
            a=a/10;
        }
        if(sum==(i*9))
            cout<<i<<endl;
    }
    return 0;
}
