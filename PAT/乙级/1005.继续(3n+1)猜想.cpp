#include <iostream> 
#include <algorithm>
using namespace std;
int main()
{
	int n,k,flag=0;
	cin>>n;//�������ݵĸ��� 
	int a[n];
	int b[10000]={0}; //�������飬������¼��֤�������� 
	for(int i=0;i<n;i++)
		cin>>a[i];//�������� 
	for(int i=0;i<n;i++)
	{
		k=a[i];
		while(k!=1)//����֤�������֣��ڸ��������б��Ϊ1 
		{
			if(k%2==0)
				k=k/2;
			else
				k=(k*3+1)/2;
			if(b[k]==1)
				break;
			b[k]=1;
		}
	}
	sort(a,a+n);//��С���������������Ҫ�Ӻ���ǰ���� 
	for(int i=n-1;i>=0;i--)
	{
		if(b[a[i]]!=1)
		{
			if(flag==1)//����flag�����������ʽ 
				cout<<' ';
			cout<<a[i];
			flag=1;
		}	
	} 
	return 0; 
}
