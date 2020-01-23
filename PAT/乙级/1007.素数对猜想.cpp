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
	vector<int> v;
	int n;
	cin>>n;
	int count=0;
	//求出范围内的素数 
	for(int i=2;i<=n;i++)
	{
		if(judge(i)==1)
			v.push_back(i);//加入动态数组 
	}
	for(int i=1;i<v.size();i++)//计算素数对的个数 
	{
		if(v[i]-v[i-1]==2)
			count++;
	}
	cout<<count;
	return 0;
		
} 
