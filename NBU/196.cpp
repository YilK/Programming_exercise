#include <iostream>

using namespace std;
#include <stdio.h>
int main()
{
    long long a[100];
    int n, i;
    a[1] = 1;
    a[2] = 2;
    while(cin >> n)
    {
        for(i = 3; i <= n; i ++)
            a[i] = a[i-1] + a[i-2];
        cout << a[n] <<endl;
    }
    return 0;
}
