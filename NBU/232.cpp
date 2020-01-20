#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	if(a==0)
	{
		if(b==1)
			cout<<"Win"<<endl;
		else
			cout<<"Lose"<<endl;
	}
	else if(a==1)
	{
		if(b==2)
			cout<<"Win"<<endl;
		else
			cout<<"Lose"<<endl;
	}
	else{
		if(b==0)
			cout<<"Win"<<endl;
		else
			cout<<"Lose"<<endl;
	}
	return 0;
	
}
