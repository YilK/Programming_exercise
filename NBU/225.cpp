#include <iostream>
using namespace std;
int main()
{
	int n;
	char x;
	cin>>n>>x;
	if(x=='F')
	{
		if(n>=60)
			cout<<180<<endl;
		else
			cout<<150<<endl;
	}
	else{
		if(n>=70)
			cout<<250<<endl;
		else
			cout<<200<<endl;
	}
	return 0;
 } 
