#include <iostream>
#include <queue>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string a[1000];
	string s;
	int time=0;
	int i,j;
	for(i=0;i<n;i++)
	{
		cin>>s;
		s='='+s;
		for(j=4;j>=1;j--)
			a[j+1]=a[j]; 
		a[1]=s;
		if(time<4)
			time++;
		for(int j=1;j<=time;j++)
			cout<<j<<a[j]<<' ';
		cout<<endl; 
	}
	return 0;
	
}
