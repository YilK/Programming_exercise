#include <iostream> //score 20
#include <string>
using namespace std;
int main()
{
	string s1;
	string s2="";
	string s3="PATest";
	cin>>s1;
	for(int i=0;i<s1.size();i++)
		if(s3.find(s1[i])!=string::npos)
			s2+=s1[i];
	while(s2.size()!=0)
	{
		if(s2.find('P')!=string::npos)
		{
			cout<<'P';
			s2.erase(s2.begin()+s2.find('P'));
		}
		if(s2.find('A')!=string::npos)
		{
			cout<<'A';
			s2.erase(s2.begin()+s2.find('A'));
		}
		if(s2.find('T')!=string::npos)
		{
			cout<<'T';
			s2.erase(s2.begin()+s2.find('T'));
		}
		if(s2.find('e')!=string::npos)
		{
			cout<<'e';
			s2.erase(s2.begin()+s2.find('e'));
		}
		if(s2.find('s')!=string::npos)
		{
			cout<<'s';
			s2.erase(s2.begin()+s2.find('s'));
		}		
		if(s2.find('t')!=string::npos)
		{
			cout<<'t';
			s2.erase(s2.begin()+s2.find('t'));
		}
		
	}
	return 0;	
}

