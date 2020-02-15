#include <iostream>
using namespace std;
void blank1(int n)
{
	for(int i=1;i<=n;i++)
		cout<<' ';
}
void blank2(int n)
{
	for(int i=1;i<=n;i++)
		cout<<'*';
}
int main()
{
	int n;
	cin>>n;
	int all=n+(n-1)*2;
	for(int i=1;i<=n;i++)
	{
		blank1(all-(n+(i-1)*2));
		blank2(n+(i-1)*2);
		cout<<endl;
	}
	return 0;
}
