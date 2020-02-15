#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    cout<<a[n-1]<<endl;
    if(n==1)
        cout<<-1;
    else
        for(int i=0;i<=n-2;i++)
            cout<<a[i]<<' ';
    return 0;
}
