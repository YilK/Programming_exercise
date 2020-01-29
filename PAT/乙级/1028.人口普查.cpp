#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct people{
	string name;
	string day; 
};
bool cmp(people a,people b)
{
	return a.day>b.day;
}
int main()
{
	int n;
	cin>>n;
	people temp;
	vector<people> v;
	for(int i=1;i<=n;i++)
	{
		cin>>temp.name>>temp.day;
		if(temp.day>="1814/09/06"&&temp.day<="2014/09/06")
			v.push_back(temp);
	}
	sort(v.begin(),v.end(),cmp);
	if(v.size()==0)//这是一个坑，如果没有一个符合条件就输出0 
		cout<<0;
	else
		cout<<v.size()<<' '<<v[v.size()-1].name<<' '<<v[0].name;
	return 0;
} 
