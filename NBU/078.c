#include <stdio.h>
int main()
{
	double start,highest,lowest,end;
	scanf("%lf %lf %lf %lf",&start,&highest,&lowest,&end);
	if(end<start)
	{
		if(lowest<end&&highest>start)
			printf("solid blue and white candle,upper shadow,lower shadow\n");

		else if (lowest<end)
			printf("solid blue and white candle,lower shadow\n");
		else if(highest>start)
			printf("solid blue and white candle,upper shadow\n");
		else
			printf("solid blue and white candle\n");
	}
	else if(end>start)
	{
		if(lowest<start&&highest>end)
			printf("hollow red candle,upper shadow,lower shadow\n");
		else if(lowest<start)
			printf("hollow red candle,lower shadow\n" );
		else if(highest>end)
			printf("hollow red candle,upper shadow\n" );
		else
			printf("hollow red candle\n");	
	}
	else
	{
		if(lowest<start&&highest>end)
			printf("cross red candle,upper shadow,lower shadow\n");
		else if(lowest<start)
			printf("cross red candle,lower shadow\n" );
		else if(highest>end)
			printf("cross red candle,upper shadow\n" );
		else
			printf("cross red candle\n");
	}
	return 0;

}