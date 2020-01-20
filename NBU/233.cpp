#include <iostream>
using namespace std;
int main()
{
	int num,amoutA=0,amoutB=0,amout;
	while(1)
	{
		cin>>num>>amout;
		if(num==0&&amout==0)
		{
			break;
		}
		else
		{
			if(num==1)
				amoutA+=amout;
			else
				amoutB+=amout;
		}
	}
	if(amoutA>amoutB)
		cout<<1<<' '<<amoutA<<endl;
	else if(amoutA==amoutB)
		cout<<"equal"<<endl;
	else
		cout<<2<<' '<<amoutB<<endl;
	return 0;
}
