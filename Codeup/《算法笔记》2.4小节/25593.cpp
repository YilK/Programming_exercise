#include <iostream>
using namespace std;
int main()
{
	double res=0;
	int flag=1;
	for(int i=1;;i=i+2)
	{
		if(1.0/i<0.000001)
			break;
		if(flag==1)
		{
			res+=1.0/i;
			flag=0;
		}
		else
		{
			res+=-1.0/i;
			flag=1;	
		}
	}
	printf("PI=%.8lf\n",res*4);
	return 0;
}
