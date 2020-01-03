#include <stdio.h>
#include <string.h>
int main()
{
	char str[1000];
	gets(str);
	int n,i,a[10];//设置数组统计每个数字出现的次数
	for(i=0;i<=9;i++)
	{
		a[i]=0;
	}
	n=strlen(str);
	i=0;
	while(i<n)
	{
		switch(str[i])
		{
			case '0':a[0]=a[0]+1;break;
			case '1':a[1]=a[1]+1;break;
			case '2':a[2]=a[2]+1;break;
			case '3':a[3]=a[3]+1;break;
			case '4':a[4]=a[4]+1;break;
			case '5':a[5]=a[5]+1;break;
			case '6':a[6]=a[6]+1;break;
			case '7':a[7]=a[7]+1;break;
			case '8':a[8]=a[8]+1;break;
			case '9':a[9]=a[9]+1;break;
		}
		i++;
	}
	for(i=0;i<=9;i++)
		if(a[i]!=0)
			printf("%d:%d\n",i,a[i] );
	return 0;
}