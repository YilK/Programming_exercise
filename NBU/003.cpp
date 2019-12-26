//分别计算多组a+b的值
//输入包含多组测试数据。每行包含遗嘱整数a,b。当输入0 0时，测试结束，此时结果不输出
#include <stdio.h>
int main(){
	int a,b;
	while(1)
	{
		scanf("%d %d",&a,&b);//输入数据
		if(a==0&&b==0)//循环终止条件
			break;
		printf("%d\n",a+b);//输出结果
	}
	return 0;
}