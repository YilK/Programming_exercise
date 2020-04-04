/*
每天一开始，第一个在机房里签字的人会打开门，最后一个签字的人会锁上门。
根据签到和退房的记录，你应该找到那天锁门的人。

*/
#include <iostream>
#include <string>
#include <climits>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string number;
	int h1,m1,s1,h2,m2,s2;
	string unlock;
	string lock;
	int max=INT_MIN;.
	int min=INT_MAX;
	for(int i=1;i<=n;i++)
	{
		cin>>number;
		scanf("%d:%d:%d %d:%d:%d",&h1,&m1,&s1,&h2,&m2,&s2);
		int a=h1*3600+m1*60+s1;
		int b=h2*3600+m2*60+s2;
		if(a<min)
		{
			min=a;
			unlock=number;
		}
		if(b>max)
		{
			max=b;
			lock=number;
		}
	}
	cout<<unlock<<' '<<lock<<endl;
	return 0;
}