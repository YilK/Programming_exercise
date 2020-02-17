#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> w;
    vector<int> y;
    for(int i=2;i<=60;i++)
    {
        int sum=0;
        for(int j=1;j<i;j++)
            if(i%j==0)
                sum+=j;
        if(sum==i)
            w.push_back(i);
        else if(sum>i)
            y.push_back(i);
    }
    cout<<"E: ";
    for(int i=0;i<w.size();i++)
    {
        if(i==w.size()-1)
            cout<<w[i];
        else
            cout<<w[i]<<' ';
    }
    cout<<endl;
    cout<<"G: ";
    for(int i=0;i<y.size();i++)
    {
        if(i==y.size()-1)
            cout<<y[i];
        else
            cout<<y[i]<<' ';
    }
    return 0;
}
