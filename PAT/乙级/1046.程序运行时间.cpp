#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);//����
	int c[n]={0}; //����������б�� 
	int a,an,b,bn;
	for(int i=0;i<n;i++)
	{
		scanf("%d %d %d %d",&a,&an,&b,&bn);//���� 
		//�ж� 
		if(an==(a+b)&&bn==(a+b))
			continue;
		else if(an==(a+b))
			c[i]=1;//�����Ӯ
		else if(bn==(a+b)) 
			c[i]=-1;//������Ӯ
		else
			continue; 
	}
	a=0;b=0;
	for(int i=0;i<n;i++)//ͳ�� 
	{
		if(c[i]==1)
			b++;
		else if(c[i]==-1)
			a++; 
	}
	printf("%d %d\n",a,b);//��� 
	return 0;
} 
