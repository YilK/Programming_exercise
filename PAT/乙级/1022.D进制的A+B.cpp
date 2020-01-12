#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int all=a+b;
	vector<int> v;
	if(all==0){//这里是一个坑 
		cout<<0;
		return 0;
	}
	while(all!=0)
	{
		v.push_back(all%c);
		all=all/c;
	}
	for(int i=v.size()-1;i>=0;i--)
		cout<<v[i];
	return 0;
	
}
