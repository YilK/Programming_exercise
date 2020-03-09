#include <iostream>
using namespace std;
int num[1001];
int main()
{
	int flag=0;
	int n;
	int i=0;
	int x;
	cin>>x;
	while(1)
	{
		cin>>n;
		if(n!=0)
		{
			num[i]=n;
			i++;
		}
		else
			break;
	}
	for(int j=0;j<i;j++)
	{
		if(num[j]%x==0)
		{
			cout<<num[j]<<endl;
			flag=1; 
		}
	}
	if(flag==0)
		cout<<"ZERO"<<endl;
	return 0;
}
