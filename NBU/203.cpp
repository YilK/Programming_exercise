#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	int n;
	scanf("%d",&n);
	s.erase(n-1,1);
	cout<<s<<endl;
	return 0;
}
