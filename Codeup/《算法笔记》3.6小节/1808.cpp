#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s1;
	string s2;
	cin>>s1;
	while(getline(cin,s2))
	{
		getchar();
		int num[10000]={0};
		int i,j;
		for(i=0;i<s2.size();)
		{
			int m=i;
			int flag=1;
			for(j=0;j<s1.size();j++,m++)
			{
				if(s2[m]!=s1[j])
				{
					flag=0;
					break;
				}
			}
			if(flag==0)
				i++;
			else
			{
				for(int k=0;k<s1.size();k++)
				{
					s2[i]=' ';
					i++;
				} 
			}
		}
		for(i=0;i<s2.size();i++)
			if(s2[i]!=' ')
				cout<<s2[i];
		cout<<endl;
	}
	return 0;
}
