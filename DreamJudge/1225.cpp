#include <iostream>
using namespace std;
int main()
{
	int n,m;//n��������m�����ߵı��
	cin>>n>>m;
	int i;
	int a[300]={0};
	for(i=1;i<=n;i++)
		cin>>a[i];//ÿ������ϲ�����鼮�ı��
	for(i=1;i<=n;i++)
	{
		int res=0;
		for(int j=1;j<=n;j++)
		{
			if(j!=i)
			{
				if(a[j]==a[i])
					res++;
			}
		}
		if(res!=0)
			cout<<res<<endl;
		else
			cout<<"BeiJu"<<endl;
	}
	return 0;
	
}
