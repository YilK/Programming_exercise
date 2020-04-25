#include <iostream>
#include <string>
using namespace std;
struct node
{
	string name;
	int count;
}leader[3]={"Li", 0, "Zhang", 0, "Fun", 0};
int main()
{
	int n;
	cin>>n;
	string s;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		if(s=="Li")
			leader[0].count++;
		else if(s=="Zhang")
			leader[1].count++;
		else
			leader[2].count++;
	}
	for(int i=0;i<3;i++)
		cout<<leader[i].name<<':'<<leader[i].count<<endl;
	return 0;
} 
