#include <iostream>
using namespace std;
int main()
{
	int n=100;
	int sum=0;
	do{
		sum+=n;
		n--;
	}while(n!=0);
	cout<<sum<<endl;
	return 0;
}
