#include <iostream>//score1 14  score2 20
#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[101]={0};
	int b;
	for(int i=1;i<=n;i++)
	{
		cin>>b;
		a[b]++;	
	} 
	int c;
	cin>>c;
	int d[c];
	for(int i=0;i<c;i++)
		cin>>d[i];
	for(int i=0;i<c;i++)
	{
		if(i==c-1)
			cout<<a[d[i]];
		else
			cout<<a[d[i]]<<' ';
	}
	
}
