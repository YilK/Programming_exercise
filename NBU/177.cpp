#include <stdio.h>
#include <vector> 
using namespace std;
int main()
{
	//���ü�����
	int i,j,n,min,temp;
	scanf("%d",&n);//Ԫ�صĸ��� 
	vector<int> v(n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&v[i]);
	}
	min=0;
	for(j=1;j<n;j++)
	{
		if(v[min]>v[j])
		{
			min=j;//��¼���� 
		}
	}
	if(min!=0)
	{
		temp=v[min];
		v[min]=v[0];
		v[0]=temp;	
	} 
	for(i=0;i<n;i++)
	{
		if(i==n-1){
			printf("%d\n",v[i]);
		}
		else
			printf("%d ",v[i]);
	}
	return 0;
}
