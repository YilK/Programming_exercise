#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	string s;
	char a;
	vector<int> v;
	getline(cin,s);
	cin>>a;
	int count;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]==a)
		{
			count++;
			v.push_back(i+1);
		}
	}
	cout<<count<<endl;
	for(int j=0;j<v.size();j++)
	{
		cout<<v[j]<<endl;
	}
	return 0;
}
