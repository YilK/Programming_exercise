#include <iostream>//score 15
#include <string> 
#include <vector>
using namespace std;
struct student{
	string number;//zh 
	int place1;
	int place2;
};
int main()
{
	int n;
	cin>>n;
	student temp;
	vector<student> v(n+1);
	for(int i=1;i<=n;i++)
	{
		cin>>temp.number>>temp.place1>>temp.place2;
		v[temp.place1]=temp;
	}
	int k;
	cin>>k;
	int a[k];
	for(int i=0;i<k;i++)
		cin>>a[i];
	for(int i=0;i<k;i++)
	{
		cout<<v[a[i]].number<<' '<<v[a[i]].place2<<endl;
	}
	return 0;
} 
