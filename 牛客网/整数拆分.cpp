
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
         f[0] = f[1] = 1; //最小数1的拆分种类只有1种
         for (i=2; i<=n; ++i)
        {
            if (i % 2)   //对奇数的处理
               f [i] = f[i-1];
            else     //对偶数的处理  
               f [i] = (f[i-1] + f[i/2]) % 1000000000;
         }
          printf ("%d\n", f[n]);
    }
    return 0;
}