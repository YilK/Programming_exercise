#include <iostream>
using namespace std;
int judge(int n)//�ж��ǲ������� 
{
	int flag=0;
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
		return 0;//������������0
	else
		return 1;//����������1 
}
int main()
{
	int n;
	cin>>n;
	int min=100000,a,b;
	for(int i=2;i<=n/2;i++)
	{
		if(judge(i)==1&&judge(n-i)==1)
		{
			if(min>n-2*i)
			{
				a=i;
				b=n-i;
				min=n-2*i;
			}
		}	
	} 
	cout<<a<<' '<<b<<endl;
	return 0;
	
}
