#include <stdio.h>
#include <vector>
using namespace std;
int main()
{
	int num,n,m;
	scanf("%d %d",&num,&n);//输入
	vector<int> a;//定义一个vector,没有分配大小
	while(num!=0)
	{
		m=num%n;
		num=num/n;
		if(m==10)
		a.push_back(m);//末尾添加元素
	}
	for(int i=a.size()-1;i>=0;i--)
		printf("%d ",a[i]);
	return 0;

}