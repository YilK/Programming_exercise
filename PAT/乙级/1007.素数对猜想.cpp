#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int judge(int n)//�ж��Ƿ������� 
{
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0)
			return 0; 
	return 1;
}
int main()
{
	vector<int> v;
	int n;
	cin>>n;
	int count=0;
	//�����Χ�ڵ����� 
	for(int i=2;i<=n;i++)
	{
		if(judge(i)==1)
			v.push_back(i);//���붯̬���� 
	}
	for(int i=1;i<v.size();i++)//���������Եĸ��� 
	{
		if(v[i]-v[i-1]==2)
			count++;
	}
	cout<<count;
	return 0;
		
} 
