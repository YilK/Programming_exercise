#include <stdio.h>
#include <string.h>
int main()
{
	char a[100];
	int i,j,n,flag=0;
	scanf("%s",&a);//输入数字字符串
	n=strlen(a);
	if(n%2==0)
	{
		j=n/2;
		i=n/2-1;
		while(i>=0)
		{
			if(a[i]!=a[j])
			{
				flag=1;
				break;
			}
			i--;
			j++;	
		}	
	}
	else
	{
		i=n/2-1;
		j=n/2+1;
		while(i>=0)
		{
			if(a[i]!=a[j])
			{
				flag=1;
				break;
			}	
			i--;j++;

		}
	}
	if(flag==0)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;

}