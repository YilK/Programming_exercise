#include <iostream>
#include <algorithm>
#include <vector> 
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	vector<int> a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	m=m%n;
	if(m!=0)
	{
		reverse(a.begin(),a.begin()+n);
		reverse(a.begin(),a.begin()+m);
		reverse(a.begin()+m,a.begin()+n);
	}
	for(int i=0;i<n-1;i++)
	{
		cout<<a[i]<<' ';
	}
	cout<<a[n-1];
	return 0;
}
/*���鳤��Ϊn,Ҫ�������ѭ������mλ��
ֻ��Ҫ�Ƚ���������a���ã��ٽ������ǰmλ���ã��ٽ�
����ĺ�n-mλ���ü��� 
