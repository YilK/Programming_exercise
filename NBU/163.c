#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],b[n];
	int i,j,flag=0;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		scanf("%d",&b[i]);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(a[i]==b[j]){
				printf("%d\n",a[i]);
				flag=1;
			}
	if(flag==0)
		printf("failure\n");
	return 0;

}