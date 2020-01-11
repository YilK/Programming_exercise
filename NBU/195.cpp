#include <stdio.h>
int number(int m)
{
	if(m==1)
		return 0;
	else if(m==2)
		return 1;
	else if(m==3)
		return 2;
	else
		return number(m-1)+number(m-2);
}
int main()
{
	int n,m,z;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&m);
		z=number(m);
		printf("%d\n",z);
	}
	return 0;
	
}
