/*我市最高的大楼只有一部电梯。请求列表由N个正数组成。
数字表示电梯将按指定顺序停在哪个楼层。电梯上移一层需要6秒，下移一层需要4秒。
电梯在每一站停留5秒钟。
对于给定的请求列表，您需要计算完成列表中的请求所花费的总时间。
电梯一开始在第0层，在满足要求时不必返回底层。

每个输入文件包含一个测试用例。每种情况都包含一个正整数N，后跟N个正数。输入的所有数字都小于100。
*/
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int res=0;
	int begin=0;
	int num;
	for(int i=1;i<=n;i++)
	{
		cin>>num;
		if(num>=begin)
		{
			res=res+(num-begin)*6+5;
			begin=num;
		}
		else 
		{
			res=res+(begin-num)*4+5;
			begin=num;
		}
	}
	cout<<res<<endl;
	return 0;

}