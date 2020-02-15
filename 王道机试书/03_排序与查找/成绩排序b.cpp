#include <iostream>
#include <vector>
#include <string> 
#include <algorithm>
using namespace std; 
struct student{
	string name;
	int score;
	int rank;
};
using namespace std;
bool cmp1(student a,student b)
{
	if(a.score==b.score)
		return a.rank<b.rank;
	else
		return a.score>b.score;
}
bool cmp2(student a,student b)
{
	if(a.score==b.score)
		return a.rank<b.rank;
	else
		return a.score<b.score;
}
int main()
{
	int n;
	int x;
	cin>>n>>x;
	vector<student> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i].name>>v[i].score;
		v[i].rank=i;
	}
	if(x==0)
		sort(v.begin(),v.end(),cmp1);
	else
		sort(v.begin(),v.end(),cmp2);
	for(int i=0;i<n;i++)
		cout<<v[i].name<<' '<<v[i].score<<endl;
	return 0;
}
