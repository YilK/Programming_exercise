#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct time{
	int begin;
	int end;
};
bool cmp1(time a,time b)
{
	return a.end<b.end;
}
int main()
{
	 int n;
	 cin>>n;
	 vector<time> v;
	 time t;
	 int number=0;
	 for(int i=0;i<n;i++)
	 {
		 cin>>t.begin>>t.end;
		 v.push_back(t);
	 }
	 int currenttime=0;
	 sort(v.begin(),v.end(),cmp1);
	 for(int j=0;j<n;j++)
	 {
		if(currenttime<=v[j].begin)
		{
			currenttime=v[j].end;
			number++;
		}
	 }
	 cout<<number<<endl;
	 return 0;
}