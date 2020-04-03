#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct node 
{
	int number;
	int score;	
};
bool cmp(node a,node b)
{
	if(a.score==b.score)
		return a.number<b.number;
	else
		return a.score>b.score;
}
int main()
{
	int n,m;
	cin>>n>>m;
	vector<node> v;
	int i;
	for(i=0;i<n;i++)
	{
		node temp;
		cin>>temp.number>>temp.score;
		v.push_back(temp);	
	}
	int j;
	sort(v.begin(),v.end(),cmp);
	int z=int(m*1.5);
	for(i=z;i<n;i++)
	{
		if(v[i].score==v[z-1].score)
			z++;
		else
			break;
	}
	cout<<v[z-1].score<<' '<<z<<endl;
	for(i=0;i<z;i++)
	 	cout<<v[i].number<<' '<<v[i].score<<endl;
	return 0;
} 
