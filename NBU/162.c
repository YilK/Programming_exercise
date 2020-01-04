#include <stdio.h>
int main()
{
	int a[3][4],i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
            scanf("%d",&a[i][j]);
    }
	int max=a[0][0];
    int row=0,colum=0;
	for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
            if(max<a[i][j]){
            	max=a[i][j];
                row=i;
                colum=j;
            }

    }
    printf("%d %d %d\n",max,row,colum);
    return 0;

}