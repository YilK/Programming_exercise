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
		for(int i=2;i<str.size();i++)//Ҫע��0xǰ׺ 
		{
			number*=16;//��Ϊ��16����ת��Ϊ10��������Ҫ��16 
			number+=chartoint(str[i]);
		}
		cout<<number<<endl;
	}
}
