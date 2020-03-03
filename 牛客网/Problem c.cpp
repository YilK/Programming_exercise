#include <iostream>
#include <string>
#include <vector>
using namespace std;
int zhengshu(string s)
{
	int num=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]>='0'&&s[i]<='9')
		{
			num=(num*10)+s[i]-'0';
		}
	}
	return num;
}
int isPrime(int number)
{
	for(int i=2;i*i<=number;i++)
		if(number%i==0)
			return -1;
	return 1;
}
int main()
{
	int n;
	cin>>n;
	string s;
	vector<string> v;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		v.push_back(s);
	}
	for(int j=0;j<v.size();j++)
	{
		int num=zhengshu(v[j]);
		if(num==0||num==1||num==2)
			cout<<num<<endl;
		else
		{
			if(isPrime(num)==1)
				cout<<num<<endl;
			else
			{
				for(int i=2;i<num;i++)
				{
					if(num%i==0)
					{
						cout<<num/i<<endl;
						break;
					}
				}
			}
		}
	}
	return 0;
}