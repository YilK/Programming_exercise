#include <iostream>
using namespace std;
int main(){
	int n,count=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			count++;
			if(count%10==0){
				cout<<i*i;
				cout<<endl;
			}
			else
				cout<<i*i<<' ';
		}
	}
//	cout<<endl;
	return 0;
	
}
