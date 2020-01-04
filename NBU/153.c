#include <stdio.h>
int main()
{
	int a[11];
	int i,j;
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	int key;
	scanf("%d",&key);
	for(i=0;i<=9;i++)
	{
		if(key>a[i]){
			continue;
		}
		else{ 
			break;
		}
	}
	for(j=10;j>i;j--)
	{
		a[j]=a[j-1];
	}
	a[i]=key;
	for(i=0;i<=10;i++)
		printf("%d ",a[i] );
	printf("\n");
	return 0;

}