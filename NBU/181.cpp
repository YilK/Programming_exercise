#include <stdio.h>
#include <vector>
using namespace std;

int main()
{
	int n,m,r,c,k;
	scanf("%d %d",&n,&m);
	int a[n][m];
	int i,j;
	vector<int> b;
	//�������� 
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d",&a[i][j]);
	//���������С
	for(i=0;i<n;i++)
	{
		r=0;
		c=i;
		for(j=1;j<m;j++)
		{
			if(a[c][r]<a[c][j])
			{
				r=j;
			}
		}
		//�ҵ���ÿ��������Ԫ��
		//�ж����Ƿ���ÿ������С��Ԫ��
		//a[c][r];
		int flag=0;//���λ 
		for(k=0;k<n;k++)
		{
			if(k==i)
				continue;
			else
			{
				if(a[i][r]>a[k][r])
				{
					flag=1;
					break;
				} 
			} 			
		} 
		if(flag==0)
			b.push_back(a[i][r]);	
	}
//	for(i=0;i<b.size();i++)
//		printf("%d",b[i]);
	if(b.size()==0)
		printf("not exist\n");
	else{
		int min=b[0];
		for(i=1;i<b.size();i++)
		{
			if(min>b[i])
				min=b[i];
		}
		printf("%d\n",min);
	}
	return 0;
 } 
