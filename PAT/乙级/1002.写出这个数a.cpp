#include <iostream>
#include <string>
#include <vector>
using namespace std;
int judge1(char a)//统计每个字符所对应的数字 
{
	int n;
	switch(a)
	{
		case'0':n=0;break;
		case'1':n=1;break;
		case'2':n=2;break;
		case'3':n=3;break;
		case'4':n=4;break;
		case'5':n=5;break;
		case'6':n=6;break;
		case'7':n=7;break;
		case'8':n=8;break;
		case'9':n=9;break;
	}
	return n;
}
string judge2(int a)//得出每个数字所对应的字符串 
{
	string n;
	switch(a)
	{
		case 0:n="ling";break;
		case 1:n="yi";break;
		case 2:n="er";break;
		case 3:n="san";break;
		case 4:n="si";break;
		case 5:n="wu";break;
		case 6:n="liu";break;
		case 7:n="qi";break;
		case 8:n="ba";break;
		case 9:n="jiu";break;
	}
	return n;
}
int main()
{
	string n;//将数据存入字符串中 
	cin>>n;//输入数据 
	int sum=0;
	for(int i=0;i<n.size();i++)//计算出各位数字之和 
	{
		sum+=judge1(n[i]);
	}
	vector<string> v;//创建动态数组 
	while(sum!=0)
	{
		v.push_back(judge2(sum%10));//将数字所对应的字符串存入数组 
		sum=sum/10;
	}
	for(int i=v.size()-1;i>=0;i--)//输出 
	{
		if(i==0)
			cout<<v[i];
		else 
			cout<<v[i]<<' ';
	 } 
	return 0;
} 
