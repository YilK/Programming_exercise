//分别计算多组a+b的值
//第一行包含一个整数N，表示有N组数据。接下来的N行，每行输入一组a,b数据
#include <stdio.h>
int main()
{
	int N;//数据数目
	scanf("%d",&N);
	int a,b;
	for(int i=0;i<N;i++)
	{
		scanf("%d %d",&a,&b);//输入数据
		printf("%d\n",a+b);//输出数据
	}
	return 0;
}