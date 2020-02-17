#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string s1;
    getline(cin,s1);
    vector<string> v;
    int j=0,i;
    for(i=0;i<s1.size();i++)
    {
        if(s1[i]==' ')
        {
            v.push_back(s1.substr(j,i-j));
            j=i+1;
        }
    }
    v.push_back(s1.substr(j,i-j));
	string s2;
	cin>>s2;
	string s3;
	cin>>s3;
	for(i=0;i<v.size();i++)
		if(v[i]==s2)
			v[i]=s3;
	for(i=0;i<v.size();i++)
		cout<<v[i]<<' '; 
    return 0;
}
