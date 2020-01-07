#include <stdio.h>
int find(int a,int b){
	int m=a,n=b;
	int c=b;
	while(a%b!=0)
	{
		c=a%b;
		a=b;
		b=c;
	}
	return m*n/c;
}
int main()
{
	int n;
	scanf("%d",&n);
	int num[n];
	for(int i=0;i<n;i++)
		scanf("%d",&num[i]);//输入数据
	int m=num[0];
	for(int i=1;i<n;i++)
	{
		m=find(m,num[i]);
	}
	printf("%d\n",m );
	return 0;

}