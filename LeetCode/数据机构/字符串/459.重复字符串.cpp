#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int n=s.size();
    if(n%2==1)
        return false;
    string str=s.substr(n/2); 
	cout<<str<<endl;
	return 0;   
} 
