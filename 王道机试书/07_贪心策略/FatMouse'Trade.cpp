#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct bean{
	double weight;
	double cost;
};
bool cmp1(bean a,bean b)
{
	return (a.weight/a.cost)>(b.weight/b.cost);
}
int main()
{
	int m,n;
	while(cin>>m>>n)
	{
		if(m==-1&&n==-1)
			break;
		vector<bean> v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i].weight;
			cin>>v[i].cost;
		}
		sort(v.begin(),v.end(),cmp1);
		double answer=0;
		for(int j=0;j<n;j++)
		{
			if(m>=v[j].cost)
			{
				m=m-v[j].cost;
				answer=answer+v[j].weight;
			}
			else
			{
				if(m<=0)
					break;
				else
				{
					answer=answer+(v[j].weight/v[j].cost)*m;
					m=0;
				}
			}
		}
		printf("%.3lf",answer);
		
	}
	
	return 0;
}

/*
FatMouse准备了M磅的猫粮，准备和守卫仓库里的猫交易，里面装着他最喜欢的食物，JavaBean。
仓库有N个房间。第i间房间包含J磅重的JavaBeans，需要F [i]磅的猫粮。 FatMouse不必交易房间里所有的JavaBeans，相反，如果他付了一磅猫食，他可能会得到一磅JavaBeans。这里是一个实数。现在他把这个作业分配给你：告诉他他可以获得的最大JavaBeans数量。
输入
输入由多个测试用例组成。每个测试用例都以包含两个非负整数M和N的行开始。然后N行包含两个非负整数J [i]和F [i]。最后的测试用例之后是两个-1。所有整数不大于1000。
输出
对于每个测试用例，在一行中打印一个真实数字，精确到小数点后三位，这是FatMouse可以获得的JavaBean的最大数量。
示例输入
5 3
7 2
4 3
5 2
20 3
25 18
24 15
15 10
-1 -1
示例输出
13.333
31.500
*/