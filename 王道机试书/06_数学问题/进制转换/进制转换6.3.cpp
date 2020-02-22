#include <iostream>
#include <vector>
#include <string>
using namespace std;
int chartoint(char x)
{
	if(x>='0'&&x<='9')
		return x-'0';
	else
		return x-'A'+10; 
}
int main()
{
	string str;
	while(cin>>str)
	{
		int number=0;
		for(int i=2;i<str.size();i++)//要注意0x前缀 
		{
			number*=16;//因为是16进制转换为10进制所以要乘16 
			number+=chartoint(str[i]);
		}
		cout<<number<<endl;
	}
}
