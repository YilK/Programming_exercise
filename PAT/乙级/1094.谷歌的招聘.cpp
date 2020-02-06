#include <iostream>//score 20
#include <string>
#include <cmath>
using namespace std;
int judge(int a)
{
	for(int i=2;i<=sqrt(a);i++)
		if(a%i==0)	return -1;
	return 1;
}
int main()
{
	string s;
	int l,n;
	cin>>l>>n;
	cin>>s;
	int number=0; 
	int b=-1,e;
	int falg=1;
	for(int i=0;i<s.size();i++)
	{
		b=i;e=b+n-1;
		number=0;
		if(e<=(l-1)){
			for(int j=b;j<=e;j++)
				number=number*10+(s[j]-'0');
			if(judge(number)!=1)
				continue;
			else
			{
				
				for(int j=b;j<=e;j++)//Êä³ö·½Ê½£¡ 
					cout<<s[j];
				break;
			}
		}
		else{
			cout<<404;
			break;
		}
	}
	return 0;
 } 
