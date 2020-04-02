#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int n,m;
	char s[100][100];
	cin>>n>>m;
	int i,j;
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			cin>>s[i][j];
	int xx[]={-1,-1,-1,0,0,1,1,1};
	int yy[]={-1,0,1,-1,1,-1,0,1};
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(s[i][j]=='*')
				printf("*");
			else
			{
				int num=0;
				for(int k=0;k<8;k++)
				{
					int dx=i+xx[k];
					int dy=j+yy[k];
					if(dx>=1&&dx<=n&&dy>=1&&dy<=m&&s[dx][dy]=='*')
						num++;
				}
				printf("%d",num);
			}
		}
		printf("\n"); 
	}
	return 0;
} 
