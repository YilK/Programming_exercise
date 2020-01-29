#include <iostream>//score 20
#include <string>
using namespace std;
int main()
{
	string a,b; 
	cin>>a>>b;//输入字符串 
	int number=0;
	int flag=0;
	for(int i=0;i<b.size();i++)
	{
		if(a.find(b[i])!=string::npos)
		{
			number++;//记录在a中找到的个数，目的是计算出缺了多少珠子 
			a.erase(a.begin()+a.find(b[i]));//find()返回的是位置 ， 
		}
		else
		{
			flag=1;//标记位，不要这一串珠子 
		}
	}
	if(flag!=1)
		cout<<"Yes "<<a.size();
	else
		cout<<"No "<<b.size()-number; 
	return 0;
}
