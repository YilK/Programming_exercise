#include <iostream>//score 20
#include <algorithm> 
using namespace std;
int main()
{
	int n;//�±�������
	int m;//����ͳ�Ƶĳ�������
	cin>>n>>m;
	//��������������������
	int a[n]={0};
	int b[n];
	for(int i=1;i<=m;i++)
	{
		for(int j=0;j<n;j++)
			cin>>b[j];
		for(int j=0;j<n;j++)
			a[j]+=b[j]; 
	}
	for(int i=0;i<n;i++)
		b[i]=a[i];
	sort(a,a+n);
	cout<<a[n-1]<<endl;
	int flag=1;//���������ĸ�ʽ 
	for(int i=0;i<n;i++)
	{
		if(b[i]==a[n-1])
		{
			if(flag==1)
			{
				cout<<i+1;
				flag=0;
			}
			else
				cout<<' '<<i+1;
		}
	}
	return 0;
	
	 
 } 
