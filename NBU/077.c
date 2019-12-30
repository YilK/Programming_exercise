#include <stdio.h>
int main()
{
	double L;
	int type;
	int help;
	double all;
	scanf("%lf %d %d",&L,&type,&help);
	if(help==1)
	{
		if(type==90)
			all=5.14*L*0.95;
		else if(type==93)
			all=5.54*L*0.95;
		else if(type==97)
			all=5.90*L*0.95;
		else
			all=5.13*L*0.95;
	}
	else{
		if(type==90)
			all=5.14*L*0.98;
		else if(type==93)
			all=5.54*L*0.98;
		else if(type==97)
			all=5.90*L*0.98;
		else
			all=5.13*L*0.98;
	}
	printf("%.2lf\n",all );
	return 0;
}