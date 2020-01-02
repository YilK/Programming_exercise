#include <stdio.h>
#include <string.h>
int main()
{
	char a[10];
	gets(a);
	int i,n;
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]>='A'&&a[i]<='V')
		{
			a[i]=a[i]+4;
		}
		else if(a[i]>'V'&&a[i]<='Z')
		{
			a[i]=a[i]-87+65;
		}
		else if(a[i]>='a'&&a[i]<='v')
		{
			a[i]=a[i]+4;
		}
		else if(a[i]>'v'&&a[i]<='z')
		{
			a[i]=a[i]-119+97;
		}
	}
	puts(a);
	return 0;
}