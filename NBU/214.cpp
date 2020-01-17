#include <iostream>
#include <vector>
using namespace std;
void blank(int n)
{
	for(int i=1;i<=n;i++)
		cout<<' ';
}
int main()
{
	int n;
	vector<int> v;
	cin>>n;//输入行数
	for(int i=1;i<=n/2;i++)//打印上半部分 
	{
		blank((n-(2*i-1))/2);//打印空格
		for(int j=1;j<=2*i-1;j++)//打印* 
			cout<<'*';
		cout<<endl; 
	}
	for(int i=1;i<=n;i++)//打印中间部分 
	{
		cout<<'*';
	}
	cout<<endl;
	for(int i=(n-1)/2;i>=1;i--)//打印下半部分 
	{
		blank((n-(2*i-1))/2);//打印空格
		for(int j=1;j<=2*i-1;j++)
			cout<<'*';
		cout<<endl;
	}
	return 0;
}
