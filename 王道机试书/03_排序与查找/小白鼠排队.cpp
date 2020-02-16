#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
struct mouse{
    int w;
    string c;
};
bool cmp1(mouse a,mouse b)
{
    return a.w>b.w;
}
int main()
{
    int n;
    cin>>n;
    vector<mouse> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i].w>>v[i].c;
    }
    sort(v.begin(),v.end(),cmp1);
    for(int i=0;i<n;i++)
        cout<<v[i].c<<endl;
    return 0;
}
