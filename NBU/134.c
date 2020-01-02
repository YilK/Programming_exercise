#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a,b,c;
	int flag=0;
	for(a=0;a<=9;a++)
		for(b=0;b<=9;b++)
			for(c=0;c<=9;c++)
				if((a*100+b*10+c+c*100+b*10+a)==n){
					printf("a=%d,b=%d,c=%d\n",a,b,c );
					flag=1;
				}
	if(flag==0)
		printf("No Solution\n");
	return 0;
}