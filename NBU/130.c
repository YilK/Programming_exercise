#include <stdio.h>
int main()
{
	int i;
	int n;
	scanf("%d",&n);
	int flag=0;
	for(i=2;i<n;i++)
	{
		if(n%i==0){
			flag=1;
			break;
		}
	}
	if(flag==1)
		printf("no\n");
	else
		printf("yes\n");
	return 0;
}