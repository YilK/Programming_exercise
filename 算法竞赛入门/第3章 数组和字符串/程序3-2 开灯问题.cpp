#include <iostream>
using namespace std;
int light[1002]={0}; 
int main()
{
	int n,k;//灯数与人数
	cin>>n>>k;
	for(int i=1;i<=k;i++)
	{
		for(int j=i;j<=n;j=j+i)
			if(light[j]==0)
				light[j]=1;
			else
				light[j]=0;
	} 
	for(int i=1;i<=n;i++)
		if(light[i]==1)
			cout<<i<<' ';
	return 0;
}
