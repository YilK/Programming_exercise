#include <iostream>
#include <vector>
#include <cmath> 
using namespace std;
int judge(int n)//判断是否是素数 
{
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0)
			return 0; 
	return 1;
}
int main()
{
	int m,n;//输入范围 
	int count=0;//计数器 
	int num=0;//换行控制器 
	vector<int> v;//设置动态数组 
	cin>>m>>n;
	for(int i=2;count<=n;i++)//添加素数至动态数组中 
	{
		if(judge(i)==1)
		{
			count++;
			v.push_back(i);
		}
	}
	for(int i=m-1;i<=n-1;i++)//输出范围内的素数 
	{
			num++;
			if(num%10==0)
			{
				cout<<v[i]<<endl;
			}
			else
			{
				if(i==n-1)//注意:最后一行的最后一个数字后面不能加上空格 
					cout<<v[i];
				else
					cout<<v[i]<<' '; 
			}
				
	} 
	return 0;
} 
