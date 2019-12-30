#include <stdio.h>
int main()
{
	int x,y,z,temp;
	scanf("%d %d %d",&x,&y,&z);
	if(x<y)
	{
		if(y<z)
			printf("%d %d %d\n",z,y,x );
		else
		{
			if(x>z)
				printf("%d %d %d\n",y,x,z );
			else
				printf("%d %d %d\n",y,z,x );
		}			
	}
	else
	{
		if(y>z)
			printf("%d %d %d\n",x,y,z );
		else
		{
			if(x>z)
				printf("%d %d %d\n",x,z,y );
			else
				printf("%d %d %d\n",z,x,y );
		}
	}
	return 0;
}