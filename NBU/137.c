#include <stdio.h>
int main()
{
	int i,j,k;
	int N;
	scanf("%d",&N);
	int flag=0;
	for(i=0;i<=N;i++)
		for(j=0;j<=N;j++)
			for(k=0;k<=N;k++)
			{
				if((i+j+k)==N&&k%2==0)
				{
					if((i*4+j*3+k/2)==N){
						printf("%d %d %d\n",i,j,k );
						flag=1;
					}
				}
			}
	if(flag==0)
		printf("Error\n");
	return 0;
}