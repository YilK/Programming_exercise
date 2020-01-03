#include <stdio.h>
void hanoi(int n,char a,char b,char c)
{
	if(n==1)
		printf("%c->%c\n",a,c);
	else
	{
		hanoi(n-1,a,c,b);//剩下的n-1个借助c移到b
		printf("%c->%c\n",a,c);//把最后一个盘从a移到c
		hanoi(n-1,b,a,c);//把b柱的n-1个借助a移到c
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	hanoi(n,'a','b','c');
	return 0;
}