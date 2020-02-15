#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    int sum=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
    	int flag1=0,flag2=0;    	
        if(i%7!=0)
            flag2=1;
		string s=to_string(i);
        for(int j=0;j<s.size();j++)
            if(s[j]=='7')
            {
                flag1=1;
                break;
            }
    	if(flag2==1&&flag1==0)
    		sum+=i*i;
	}
    cout<<sum;
    return 0;
}
