#include <iostream>
#include <string>
#include <vector>
using namespace std;
char IntToChar(int x)
{
	if(x<10)
		return x+'0';
	else
		return x-10+'a';
}
int CharToInt(char c)
{
	if(c>='0'&&c<='9')
		return c-'0';
	else
		return c-'A'+10;
}
int main()
{
	int m,n;
	cin>>m>>n;
	string str;
	cin>>str;
	long long number=0;
	for(int i=0;i<str.size();i++)//m进制转换为十进制 
	{
		number*=m;
		number+=CharToInt(str[i]); 
	}
	vector<char> answer;
	while(number!=0)
	{
		answer.push_back(IntToChar(number%n));
		number=number/n;
	}
	for(int i=answer.size()-1;i>=0;i--)
		cout<<answer[i];
	cout<<endl;
	return 0;
} 
