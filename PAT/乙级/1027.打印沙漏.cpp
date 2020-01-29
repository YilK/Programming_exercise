#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n;
	char c;
	cin>>n>>c;//输入 
	vector<int> v;
	v.push_back(1);
	int sum=1; 
	for(int i=3;;i=i+2)//计算半个沙漏每一行有多少符号 
	{
		if(sum+2*i<=n)
		{
			v.push_back(i);
			sum=sum+2*i;
		}
		else
			break;		
	}
	sum=n-sum;//没用掉的符号数 
	for(int i=0;i<v.size();i++)//输出上半个沙漏 
	{
		for(int j=1;j<=(v[v.size()-1]-v[v.size()-i-1])/2;j++)//计算空格数 
			cout<<' ';
		for(int j=1;j<=v[v.size()-i-1];j++) 
			cout<<c;
		cout<<endl;
	}
	for(int i=1;i<v.size();i++)//输出下班个沙漏 
	{
		for(int j=1;j<=(v[v.size()-1]-v[i])/2;j++)//计算空格数 
			cout<<' ';
		for(int j=1;j<=v[i];j++)
			cout<<c;
		cout<<endl;
	}
	cout<<sum;
	return 0;
}
