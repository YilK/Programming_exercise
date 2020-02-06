#include <iostream>
#include <algorithm>
using namespace std;
int judge(int a)
{
	for(int i=2;i<=sqrt(a);i++)
		if(a%i==0)	return -1;
	return 1;
}
int main()
{
	cout<<judge(49877);
	return 0;
}

