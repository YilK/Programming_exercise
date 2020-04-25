#include <cstdio>
int main()
{			
	int a,b,c;
	int *p=&a,*q=&b,*r=&c;
	scanf("%d %d %d",&a,&b,&c);
	printf("%d %d %d\n",(*p>*q?*p:*q)>*r?(*p>*q?*p:*q):*r,(*p>*q?*p:*q)>*r?((*p>*q?*q:*p)>*r?(*p>*q?*q:*p):*r):(*p>*q?*p:*q),(*p>*q?*q:*p)<*r?(*p>*q?*q:*p):*r);
	return 0;
}
