#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int i;
	map<int,char> m;
	m[1]='A';
	m[2]='T';
	m[3]='e';
	m[4]='s';
	m[5]='t';m[0]='P';
	int a[6]={0};
	int num=0;
	for(i=0;i<s.size();i++)
	{
		if(s[i]=='P')
		{
			a[0]++;
			num++;
		}
		else if(s[i]=='A')
		{
			a[1]++;
			num++;
		}
		else if(s[i]=='T')
		{
			a[2]++;
			num++;
		}
		else if(s[i]=='e')
		{
			a[3]++;
			num++;
		}
		else if(s[i]=='s')
		{
			a[4]++;
			num++;
		}
		else if(s[i]=='t')
		{
			a[5]++;
			num++;
		}

	}

	while(num>0)
	{
		for(i=0;i<6;i++)
		{
			if(a[i]>0)
			{
				cout<<m[i];
				a[i]--;
				num--;
			}
		}
	}
	cout<<endl;
	return 0;
}
