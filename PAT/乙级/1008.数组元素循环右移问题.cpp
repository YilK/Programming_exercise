#include <iostream>
#include <algorithm>
#include <vector> 
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	vector<int> a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	m=m%n;
	if(m!=0)
	{
		reverse(a.begin(),a.begin()+n);
		reverse(a.begin(),a.begin()+m);
		reverse(a.begin()+m,a.begin()+n);
	}
	for(int i=0;i<n-1;i++)
	{
		cout<<a[i]<<' ';
	}
	cout<<a[n-1];
	return 0;
}
/*数组长度为n,要想把数组循环右移m位，
只需要先将整个数组a倒置，再将数组的前m位倒置，再将
数组的后n-m位倒置即可 
