#include <iostream>//score 20
#include <string>
using namespace std;
int main()
{
	string a,b; 
	cin>>a>>b;//�����ַ��� 
	int number=0;
	int flag=0;
	for(int i=0;i<b.size();i++)
	{
		if(a.find(b[i])!=string::npos)
		{
			number++;//��¼��a���ҵ��ĸ�����Ŀ���Ǽ����ȱ�˶������� 
			a.erase(a.begin()+a.find(b[i]));//find()���ص���λ�� �� 
		}
		else
		{
			flag=1;//���λ����Ҫ��һ������ 
		}
	}
	if(flag!=1)
		cout<<"Yes "<<a.size();
	else
		cout<<"No "<<b.size()-number; 
	return 0;
}
