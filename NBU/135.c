#include <stdio.h>
int main()
{
	int M,N;
	scanf("%d %d",&M,&N);
	int number;
	number=M*(M+1)*N*(N+1)/4;
	printf("%d\n",number );
	return 0;
}