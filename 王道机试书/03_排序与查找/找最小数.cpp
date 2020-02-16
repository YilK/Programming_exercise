#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct data{
  int x,y;  
};
bool cmp1(data a,data b)
{
    if(a.x==b.x)
        return a.y<b.y;
    else
        return a.x<b.x;
}
int main()
{
    int n;
    cin>>n;
    vector<data> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i].x>>v[i].y;
    sort(v.begin(),v.end(),cmp1);
    cout<<v[0].x<<' '<<v[0].y;
    return 0;
}
