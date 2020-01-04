#include <stdio.h>
int main()
{
	int a[10];
	int i;
	for(i=0;i<=9;i++)
		scanf("%d",&a[i]);
	int max=a[0],maxloc=0;
	for(i=1;i<=9;i++)
	{
		if(max<a[i])
		{
			max=a[i];
			maxloc=i;
		}
	}
	int min=a[0],minloc=0;
	for(i=1;i<=9;i++)
	{
		if(min>a[i])
		{
			min=a[i];
			minloc=i;
		}
	}
	printf("%d %d\n",max,maxloc );
	printf("%d %d\n",min,minloc);
	return 0;
}