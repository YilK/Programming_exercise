#include <iostream>
using namespace std;
int main() 
{
	int n;
	cin>>n;//测试组数
	int a[n];
	for(int i=0;i<n;i++)//测试数据 
	{
		cin>>a[i];//输入测试数据	
	} 
	for(int i=0;i<n;i++)
	{
		if(a[i]%2!=0)//如果是奇数直接输出0 0 
			cout<<0<<' '<<0<<endl;
		else{
			//最少
			if(a[i]%4==0)
				cout<<a[i]/4<<' ';
			else
				cout<<a[i]/4+1<<' ';
			cout<<a[i]/2<<endl; 
		} 
	}
	return 0;
}
