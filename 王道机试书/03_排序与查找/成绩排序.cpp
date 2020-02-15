#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct student{
	int number;
	int score;
};
bool cmp1(student a,student b)
{
	if(a.score==b.score)
		return a.number<b.number;
	else
		return a.score<b.score;
}
int main()
{
	int n;
	cin>>n;
	vector<student> v(n);
	for(int i=0;i<n;i++)
		scanf("%d %d",&v[i].number,&v[i].score);
	sort(v.begin(),v.end(),cmp1);
	for(int i=0;i<n;i++)
		cout<<v[i].number<<' '<<v[i].score<<endl;
	return 0;
 } 
