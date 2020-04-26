#include <iostream>
using namespace std;
int main()
{
	int a1,b1;
	string a,b;
	while(cin>>a>>a1>>b>>b1)
	{
		int pa=0;int pb=0;
		for(int i=0;i<a.size();i++)
			if((a[i]-'0')==a1)
				pa=pa*10+a1;
		for(int i=0;i<b.size();i++)
			if((b[i]-'0')==b1)
				pb=pb*10+b1;
		cout<<pa+pb<<endl;
	}
	return 0;
} 
