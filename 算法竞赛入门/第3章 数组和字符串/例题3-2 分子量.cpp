#include <iostream>
#include <string>
#include <map>
#include <cctype>
using namespace std;
int main()
{
	string s;
	cin>>s;
	double sum=0;
	int i;
	for(i=0;i<s.size();i++)
	{
		switch(s[i])
		{
			case 'C':{
				int num=0;
				while(i+1<s.size()&&isdigit(s[i+1]))
				{
					num=num*10+(s[i+1]-'0');
					i++; 
				}
				if(num==0)
					sum+=12.01;
				else
				    sum=sum+12.01*num;
				break;
			}
			case 'H':{
				int num=0;
				while(i+1<s.size()&&isdigit(s[i+1]))
				{
					num=num*10+(s[i+1]-'0');
					i++; 
				}
				if(num==0)
					sum+=1.008;
				else
				    sum=sum+1.008*num;
				break;
			}
			
			case 'O':{
				int num=0;
				while(i+1<s.size()&&isdigit(s[i+1]))
				{
					num=num*10+(s[i+1]-'0');
					i++; 
				}
				if(num==0)
					sum+=16.00;
				else
				    sum=sum+16.00*num;
				break;
			}
			
			case 'N':{
				int num=0;
				while(i+1<s.size()&&isdigit(s[i+1]))
				{
					num=num*10+(s[i+1]-'0');
					i++; 
				}
				if(num==0)
					sum+=14.01;
				else
				    sum=sum+14.01*num;
				break;
			}
		}
	}
	cout<<sum<<endl;
	return 0;
} 
