#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	string s;//将数据存入字符串 
	int b,k=0;
	vector<int> v;//创建动态数组 
	cin>>s>>b;
	if(s.size()==1)//对个位数进行特殊处理 
	{
		k=stoi(s);
		cout<<k/b<<' '<<k%b;
	}
	else
	{
		for(int i=0;i<s.size();i++)
		{
			k=k*10+s[i]-'0';//字符转换为数字 重点 
			if(k<b)
			{
				if(v.size()==0)
					continue;
				else
					v.push_back(0);	
			}
			else
			{
				v.push_back(k/b);
				k=k%b;
			}	
		}
		for(int i=0;i<v.size();i++)
			cout<<v[i];
		cout<<' ';
		cout<<k;
	}
	return 0;
} 
