#include <stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	printf("%d ",x%10);//取出个位上的数字
	printf("%d ",x%100/10);//十位上的数字
	printf("%d\n",x/100);//取出百位上的数字
	return 0;
}