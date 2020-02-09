#include <iostream> //score 
#include <string>
#include <algorithm>
#include <cctype>
#include <cmath>
using namespace std;
int main()
{
	string s1="987654321";
	string s2="9876543210";
	int flag=1;
	int m;
	double x,y;
	cin>>m>>x>>y;
	for(int i=0;i<s1.size();i++) 
	{
		for(int j=0;j<s2.size();j++)
		{
			double jia,yi,bing;
			jia=(s1[i]-'0')*10+(s2[j]-'0');
			string jiab=to_string(jia);
			jiab=jiab.substr(0,2);
			reverse(jiab.begin(),jiab.end()); 
			yi=stoi(jiab);
			if(abs(jia-yi)/x==yi/y)
			{
				bing=yi/y;
				cout<<jia<<' ';
				if(jia>m)
					cout<<"Cong"<<' ';
				else if(jia<m)
					cout<<"Gai"<<' ';
				else
					cout<<"Ping"<<' ';
				if(yi>m)
					cout<<"Cong"<<' ';
				else if(yi<m)
					cout<<"Gai"<<' ';
				else
					cout<<"Ping"<<' ';
				if(bing>m)
					cout<<"Cong";
				else if(bing<m)
					cout<<"Gai";
				else
					cout<<"Ping";
				return 0;
			}	
		}
	}
	cout<<"No Solution";
	return 0;
 } 
