#include <iostream>
using namespace std;
int score[1001]; 
int main()
{
	int num;
	int i=0;
	while(1)
	{
		cin>>num;
		if(num>=0)
		{
			score[i]=num;
			i++;
		}
		else
			break;
	}
	for(int j=0;j<=i-1;j++)
	{
		if(score[j]>=90)
			cout<<'A'<<endl;
		else if (score[j]>=80)
			cout<<'B'<<endl;
		else if(score[j]>=70)
			cout<<'C'<<endl;
		else if(score[j]>=60)
			cout<<'D'<<endl;
		else 
			cout<<'E'<<endl;
	}
	return 0;
}
