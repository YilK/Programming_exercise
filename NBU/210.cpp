#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int n,flag=0;
	cin>>n;
	int a=0,b=0,c=0;
	for(int i=1;i<=n/6;i++)
		for(int j=1;j<=n/5;j++)
			for(int k=1;k<=n/4;k++)
			{
				if(6*i+5*j+4*k==n)
				{
					flag=1;
					if(a+b+c<i+j+k)
					{
						a=i;
						b=j;
						c=k;
					}
				}
			}	
	if(flag==0)
		printf("No Answer");
	else
		printf("%d %d %d\n",a,b,c);
	return 0;
}
