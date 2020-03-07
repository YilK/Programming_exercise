#include <iostream>
#include <string>
using namespace std;
int reverse(int num)
{
	string s;
	while(num!=0)
	{
		int n=num%10;
		char c=n+'0';
		s=s+c;
		num=num/10;
	}
	int res=0;
	for(int i=0;i<s.size();i++)
	{
		res=res*10+(s[i]-'0');
	}
	return res;
}
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int a,b;
		cin>>a>>b;
		if((reverse(a)+reverse(b))==reverse(a+b))
			cout<<a+b<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;

}