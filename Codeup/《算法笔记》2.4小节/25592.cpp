#include <iostream>
using namespace std;
int main()
{
	for(int i=1;i<=4;i++)
	{
		for(int j=i;j<=i*5;j=j+i)
		{
			if(j%5==0)
				printf("%3d\n",j);
			else
				printf("%3d",j);
		}
	}
	return 0;
}
