#include <stdio.h>
#include <string.h>
int main()
{
	char a[1000];
	char b[1000];
	char c[1000];
	gets(a);
	gets(b);
	gets(c);
	int i,n,sum1=0,sum2=0,sum3=0;
	// printf("%s\n",a );
	// printf("%s\n",b );
	// printf("%s\n",c );
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]>='A'&&a[i]<='Z')
			sum1++;
		else if(a[i]>='a'&&a[i]<='z')
			sum2++;
		else if(a[i]>='0'&&a[i]<='9')
			sum3++;
	}
	n=strlen(b);
	for(i=0;i<n;i++)
	{
		if(b[i]>='A'&&b[i]<='Z')
			sum1++;
		else if(b[i]>='a'&&b[i]<='z')
			sum2++;
		else if(b[i]>='0'&&b[i]<='9')
			sum3++;
	}
	n=strlen(c);
	for(i=0;i<n;i++)
	{
		if(c[i]>='A'&&c[i]<='Z')
			sum1++;
		else if(c[i]>='a'&&c[i]<='z')
			sum2++;
		else if(c[i]>='0'&&c[i]<='9')
			sum3++;
	}
	printf("%d %d %d\n",sum1,sum2,sum3 );
	return 0;
} 