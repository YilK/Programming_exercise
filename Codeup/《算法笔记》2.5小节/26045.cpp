#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
	char a[20],b[20];
	gets(a);
	gets(b);
	int sum=0;
	int min=strlen(a)>strlen(b)?strlen(b):strlen(a);
	for(int i=0;i<=min;i++)
		sum+=a[i]-b[i];
	printf("%d",sum);
	return 0;
	
}
