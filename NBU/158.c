#include <stdio.h>
int main()
{
	int a[10];
	int i,flag=0;
	for(i=0;i<=9;i++)
		scanf("%d",&a[i]);
	int key;
	scanf("%d",&key);
	for(i=0;i<=9;i++)
	{
		if(a[i]==key)
		{
			printf("%d\n",i );;
			flag=1;
			break;
		}
	}
	if(flag==0)
		printf("not found\n");
	return 0;
}