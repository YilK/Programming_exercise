#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int i;
	int k=0;
	while(1)
	{
		k++;
		vector<double> v;
		double num;
		for(i=0;i<n;i++)
		{
			cin>>num;
			if(num<=m&&num>=0)
				v.push_back(num);
		}
		sort(v.begin()+1,v.end());
		double res=0;
		for(int j=2;j<v.size()-1;j++)
			res+=v[j];
		res=res/(v.size()-3);
		res=(res+v[0])/2;
		res=int(res+0.5);
		cout<<res<<endl;
		if(k==n)
			break;
	}
	return 0;
}
