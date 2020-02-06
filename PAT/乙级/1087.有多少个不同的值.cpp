#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{
	int n;
	cin>>n;
	unordered_set<int> s;
	for(int i=1;i<=n;i++)
		s.insert(i/5+i/3+i/2);
	cout<<s.size();
	return 0;
} 
