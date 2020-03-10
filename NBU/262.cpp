#include <iostream>
using namespace std;
int main()
{
	int num[21];
	int a;
	int i=0;
	while(1)
	{
		cin>>a;
		if(a>0)
		{
			num[i]=a;
			i++;
		}
		else break;
	}
	//ÅÅĞòËã·¨
	for(int j=0;j<i-1;j++)
	{
		int min=j;
		for(int k=j+1;k<i;k++)
		{
			if(num[k]<num[min])
				min=k;
		}
		if(min!=i)
		{
			int temp;
			temp=num[j];
			num[j]=num[min];
			num[min]=temp;
		}
	} 
	int flag=0;
	for(int j=0;j<i;j++)
	{
		if(flag==num[j])
			continue;
		else
		{
			cout<<num[j]<<endl;
			flag=num[j];
		}
	}
	return 0;
} 
