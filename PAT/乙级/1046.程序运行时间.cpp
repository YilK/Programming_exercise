#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);//轮数
	int c[n]={0}; //设置数组进行标记 
	int a,an,b,bn;
	for(int i=0;i<n;i++)
	{
		scanf("%d %d %d %d",&a,&an,&b,&bn);//输入 
		//判断 
		if(an==(a+b)&&bn==(a+b))
			continue;
		else if(an==(a+b))
			c[i]=1;//代表甲赢
		else if(bn==(a+b)) 
			c[i]=-1;//代表乙赢
		else
			continue; 
	}
	a=0;b=0;
	for(int i=0;i<n;i++)//统计 
	{
		if(c[i]==1)
			b++;
		else if(c[i]==-1)
			a++; 
	}
	printf("%d %d\n",a,b);//输出 
	return 0;
} 
