#include <stdio.h>
int main()
{
	char x;
	scanf("%c",&x);
	int n1=0;//统计英文字母的个数
	int n2=0;//统计空格的个数
	int n3=0;//统计数字的个数
	int n4=0;//统计其他字符的个数
	while(x!='\n')
	{
		if(x>='a'&&x<='z'||x>='A'&&x<='Z')
			n1++;
		else if(x==' ')
			n2++;
		else if(x>='0'&&x<='9')
			n3++;
		else
			n4++;
		scanf("%c",&x);
	}
	printf("%d %d %d %d\n",n1,n2,n3,n4 );
	return 0;
}