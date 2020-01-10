#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;
int main()
{
	string str;
	getline(cin,str);//ÊäÈëÊı¾İ
	vector<char> a;
	int i;
	for(i=0;i<str.size();i++)
	{
		if(isdigit(str[i]))
			a.push_back(str[i]);
	}
	for(i=0;i<a.size();i++)
		cout<<a[i];
	cout<<endl;
	return 0;
}
