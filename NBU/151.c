#include <stdio.h>
int loc(int a[],int n,int k)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
			return i;
	}
	return -1;
}

int main()
{
	int a[10];
	int i,key;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&key);
	i=loc(a,10,key);
	if(i==-1)
		printf("not found\n");
	else
		printf("%d\n",i );
	return 0;
}