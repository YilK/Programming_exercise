#include <stdio.h>
int main()
{
	int num[11][100];
	int i,j;
	double m,sum=0;
	for(i=0;i<=10;i++)
		for(j=0;j<100;j++)
			num[i][j]=0;
	int a,b;
	for(i=1;;i++)
	{
		scanf("%d %d",&a,&b);
		if(a<0||b<0)
			break;
		else
			num[a][b]=1;
	}
	for(i=1;i<=10;i++)
		for(j=1;j<100;j++)
			if(num[i][j]!=0)
			{
				switch(i)
				{
					case 1:m=0.1;break;
					case 2:m=0.2;break;
					case 3:m=0.5;break;
					case 4:m=1;break;
					case 5:m=2;break;
					case 6:m=5;break;
					case 7:m=10;break;
					case 8:m=20;break;
					case 9:m=50;break;
					case 10:m=100;break;
				}
				sum=sum+m*j;
			}
	printf("%.2lf\n",sum );
	return 0;
}