#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int i;
	vector<string> v;
	for(i=0;i<s.size();i++)
	{
		string s1;
		string s2;
		string s3;
		s1=s.substr(0,i);//ÇÐ¸î 
		s2=s.substr(i,s.size()-i);
		s3=s2+s1;
		v.push_back(s3);
	} 
	for(i=0;i<v.size()-1;i++)//¼òµ¥ÅÅÐò 
	{
		int min =i;
		for(int j=i+1;j<v.size();j++)
		 	if(v[j]<v[min])
		 		min=j;
		if(min!=i)
		{
			string temp=v[i];
			v[i]=v[min];
			v[min]=temp;
		}
	}
	cout<<v[0]<<endl;
	return 0;
} 
