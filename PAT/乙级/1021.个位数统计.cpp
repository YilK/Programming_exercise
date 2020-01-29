#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
	string s;//将数据存入字符串 
	cin>>s;
	map<char,int> m;//建立键值对 
	for(int i=0;i<10;i++)
	{
		m['0'+i]=0; //将每个键所对应的值初始化为0 
	}
	for(int i=0;i<s.size();i++)
	{
		m[s[i]]++;//对出现的字符进行累加 
	}
	for(int i=0;i<10;i++)//输出 
	{
		if(m['0'+i]!=0)
			cout<<i<<':'<<m['0'+i]<<endl;	
	}
	return 0;
} 
