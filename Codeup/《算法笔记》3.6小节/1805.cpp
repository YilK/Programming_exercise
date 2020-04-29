#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
	string str;
	while(getline(cin,str))
	{
		if(islower(str[0]))
			str[0]=str[0]-32;
		int i=1,j=2;
		while(j<str.size())
		{
			if(str[i]==' '&&islower(str[j]))
			{
				str[j]=str[j]-32;
				i++;j++;
			}
			else
			{
				i++;j++;
			}
			
		}
		cout<<str<<endl;
	}
	return 0;
} 
