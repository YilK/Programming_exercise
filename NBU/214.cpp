#include <iostream>
#include <vector>
using namespace std;
void blank(int n)
{
	for(int i=1;i<=n;i++)
		cout<<' ';
}
int main()
{
	int n;
	vector<int> v;
	cin>>n;//��������
	for(int i=1;i<=n/2;i++)//��ӡ�ϰ벿�� 
	{
		blank((n-(2*i-1))/2);//��ӡ�ո�
		for(int j=1;j<=2*i-1;j++)//��ӡ* 
			cout<<'*';
		cout<<endl; 
	}
	for(int i=1;i<=n;i++)//��ӡ�м䲿�� 
	{
		cout<<'*';
	}
	cout<<endl;
	for(int i=(n-1)/2;i>=1;i--)//��ӡ�°벿�� 
	{
		blank((n-(2*i-1))/2);//��ӡ�ո�
		for(int j=1;j<=2*i-1;j++)
			cout<<'*';
		cout<<endl;
	}
	return 0;
}
