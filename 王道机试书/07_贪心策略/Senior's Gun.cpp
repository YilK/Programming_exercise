#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool cmp1(int a,int b){
	return a>b;
}
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int m,n;
		cin>>m>>n;
		vector<int> a;
		vector<int> b;
		for(int j=0;j<m;j++)
		{
			int d;
			cin>>d;
			a.push_back(d);
		}
		for(int k=0;k<n;k++)
		{
			int d;
			cin>>d;
			b.push_back(d);
		}
		sort(a.begin(),a.end(),cmp1);
		sort(b.begin(),b.end());
		int score=0;
		int q=0,p=0;
		while(q<m&&p<n)
		{
			if(a[q]>b[p])
			{
				score=score+a[q]-b[p];
				q++;
				p++;
			}
			else
			{
				break;
			}
		}
		cout<<score<<endl;

	}
	return 0;
}