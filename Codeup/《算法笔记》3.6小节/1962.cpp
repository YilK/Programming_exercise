#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s1,s2,s3;
	while(getline(cin,s1))
	{
		string s;
		cin>>s2>>s3;
		getline(cin,s);//读取cin后面的换行符。 
		int i,j;
		for(i=0;i<s1.size();)
		{
			int m=i;
			int flag=1;
			for(j=0;m<s1.size()&&j<s2.size();j++,m++)
			{
				if(s1[m]!=s2[j])
				{
					flag=0;
					break;
				}
			}
			if(flag==0){
				cout<<s1[i];
				i++;
			}
			else
			{
				cout<<s3;
				i=m;
			}
		}
		cout<<endl;
	}
	return 0;
} 
