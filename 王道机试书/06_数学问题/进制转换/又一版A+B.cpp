#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int a,b,m;
	while(cin>>m)
	{
		if(m==0)
			break;
		else
		{
			cin>>a>>b;
			vector<int> v;
			unsigned int n=a+b;//n不能为int 相加可能会溢出； 
			if(n==0)
			{
				cout<<0<<endl;
				continue;
			}
			while(n!=0)
			{
				v.push_back(n%m);
				n=n/m;
			}
			for(int i=v.size()-1;i>=0;i--)
				cout<<v[i];
			cout<<endl;
		}	
	}
	return 0;
} 
