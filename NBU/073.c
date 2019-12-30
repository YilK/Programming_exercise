#include <stdio.h>
int main()
{
	int y0,m0,d0,y1,m1,d1;
	scanf("%d %d %d %d %d %d",&y0,&m0,&d0,&y1,&m1,&d1);
	int year;
	year=y1-y0;
	if(m1<m0)
		year--;
	else if(m1==m0){
		if (d1<d0)
			year--;
	}
	else
		year=year;
	printf("%d\n",year );
	return 0;
}