#include <stdio.h>

#include <string>
#include <iostream>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	set<string> a;
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		a.insert(s);
	}
	for(set<string>::iterator it =a.begin();it!=a.end();it++)
	{
		cout<<*it<<endl;
	}
	
	return 0;
	
}

