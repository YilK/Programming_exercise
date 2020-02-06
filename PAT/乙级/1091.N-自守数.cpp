#include <iostream>//score 15
#include <cmath>
#include <string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int flag=1;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
	{
		flag=1;
		for(int j=1;j<10;j++)
		{
			int b=pow(a[i],2);
			int number=j*b;
			string str1=to_string(a[i]);
			string str2=to_string(number);
			str2=str2.substr(str2.size()-str1.size());//最重要的截取字符串的操作 
			if(str1==str2)
			{
				flag=0;
				cout<<j<<' '<<number<<endl;
				break;
			} 
		}	
		if(flag==1)
			cout<<"No"<<endl;
	}	
	return 0;
} 
