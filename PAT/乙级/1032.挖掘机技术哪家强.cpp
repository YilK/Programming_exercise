#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int sch,score;
	int all[n+1]={0};
	for(int i=1;i<=n;i++)
	{
		cin>>sch>>score;
		all[sch]+=score;	
	}	
	int max=1;
	for(int i=1;i<=n;i++)
	{
		if(all[max]<all[i])
			max=i;
	}
	cout<<max<<' '<<all[max];
	return 0;
} 
