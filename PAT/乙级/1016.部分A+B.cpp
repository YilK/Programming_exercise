#include <iostream>
#include <string>
using namespace std;
int main()
{
	string sa;
	char a;
	string sb;
	char b;
	int i;
	int suma=0,sumb=0;
	cin>>sa>>a>>sb>>b;
	for(i=0;i<sa.size();i++)
	{
		if(sa[i]==a)
			suma=suma*10+(a-'0');
	}
	for(i=0;i<sb.size();i++)
	{
		if(sb[i]==b)
			sumb=sumb*10+(b-'0');
	}
	cout<<suma+sumb;
	return 0;

}
