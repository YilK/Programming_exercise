/*������ߵĴ�¥ֻ��һ�����ݡ������б���N��������ɡ�
���ֱ�ʾ���ݽ���ָ��˳��ͣ���ĸ�¥�㡣��������һ����Ҫ6�룬����һ����Ҫ4�롣
������ÿһվͣ��5���ӡ�
���ڸ����������б�����Ҫ��������б��е����������ѵ���ʱ�䡣
����һ��ʼ�ڵ�0�㣬������Ҫ��ʱ���ط��صײ㡣

ÿ�������ļ�����һ������������ÿ�����������һ��������N�����N��������������������ֶ�С��100��
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