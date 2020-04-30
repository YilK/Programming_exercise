#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	while(getline(cin,s))
	{
		int i,j;
		int n=s.size();
		for(i=0;i<n-1;i++)
		{
			int min=i;
			for(j=i+1;j<n;j++)
				if(s[j]<s[min])
					min=j;
			if(min!=i)
			{
				char temp=s[min];
				s[min]=s[i];
				s[i]=temp;
			}
		}
		cout<<s<<endl;
	}
	return 0;
}
