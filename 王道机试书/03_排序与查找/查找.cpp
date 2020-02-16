#include <iostream>
#include <algorithm>
using namespace std;
int b_search(int a[],int b,int n)
{
    int low=0;
	int high=n-1;
    int mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==b)
            return mid;
        else if(a[mid]>b)
            high=mid-1;
        else
            low=mid+1;
    }
    return -1;
}
int main()
{
    int n,m;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>m;
    int b[m];
    //所有的数据都输入了
    sort(a,a+n); 
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
        if(b_search(a,b[i],n)!=-1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
    
}

