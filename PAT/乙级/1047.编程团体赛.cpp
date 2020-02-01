#include <iostream>//score 20 
using namespace std;
struct member{
	int num;
	int mem;
	int score;
};
int main()
{
	int n;
	cin>>n;
	member temp;
	int a[1001]={0};//建立数组，下标代表队伍 ，每个队伍的分数初始化为0 
	for(int i=0;i<n;i++)
	{
		scanf("%d-%d %d",&temp.num,&temp.mem,&temp.score); 
		a[temp.num]+=temp.score;
	}
	int m=0,max=0;
	for(int i=1;i<1001;i++)//找到最大值和下标 
		if(max<a[i])
		{
			max=a[i];
			m=i;
		}
	cout<<m<<' '<<max;
	return 0;
}
