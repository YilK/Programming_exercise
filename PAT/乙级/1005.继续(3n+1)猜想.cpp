#include <iostream> 
#include <algorithm>
using namespace std;
int main()
{
	int n,k,flag=0;
	cin>>n;//输入数据的个数 
	int a[n];
	int b[10000]={0}; //辅助数组，用来记录验证过的数字 
	for(int i=0;i<n;i++)
		cin>>a[i];//输入数据 
	for(int i=0;i<n;i++)
	{
		k=a[i];
		while(k!=1)//将验证过的数字，在辅助数字中标记为1 
		{
			if(k%2==0)
				k=k/2;
			else
				k=(k*3+1)/2;
			if(b[k]==1)
				break;
			b[k]=1;
		}
	}
	sort(a,a+n);//从小到大排序，下面就需要从后往前遍历 
	for(int i=n-1;i>=0;i--)
	{
		if(b[a[i]]!=1)
		{
			if(flag==1)//利用flag来设置输出格式 
				cout<<' ';
			cout<<a[i];
			flag=1;
		}	
	} 
	return 0; 
}
