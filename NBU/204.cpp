#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
int main()
{
	string s;
	int n,m;
	scanf("%d %d\n",&n,&m);
	getline(cin,s);
	s.erase(n-1,m);
	cout<<s<<endl;
	return 0;
	
}
