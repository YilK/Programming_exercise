#include <stdio.h>
void myadd(int a[][4],int n)
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
            a[i][j]=a[i][j]+1;
    }
}
int main()
{
    int a[3][4],i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
            scanf("%d",&a[i][j]);
    }
	myadd(a,3);   //调用函数
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
         printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}