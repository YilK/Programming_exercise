
#include<stdio.h>
#include<stdlib.h>
int f[1000001];
int main ()
{
    int i, n;
    while(scanf("%d",&n) != EOF)   {
        if((n < 1) || (n > 1000000)){
            printf("-1\n");
            continue;
        }
         f[0] = f[1] = 1; //��С��1�Ĳ������ֻ��1��
         for (i=2; i<=n; ++i)
        {
            if (i % 2)   //�������Ĵ���
               f [i] = f[i-1];
            else     //��ż���Ĵ���  
               f [i] = (f[i-1] + f[i/2]) % 1000000000;
         }
          printf ("%d\n", f[n]);
    }
    return 0;
}