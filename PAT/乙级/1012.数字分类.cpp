#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	int A1=0;
	int A2=0;
	int flag=0;
	int a2=0;
	vector<int> v5;
	int A3=0;
	int A4=0;
	int a4=0;
	
	for(int i=0;i<n;i++)
		cin>>v[i];
	for(int i=0;i<n;i++)
	{
		if(v[i]%5==0)
		{
			if(v[i]%2==0)
				A1+=v[i]; 
		}
		else if(v[i]%5==1)
		{
			a2++;
			flag=1;
			if(a2%2==1)
			{
				A2+=v[i];
			}
			else
				A2-=v[i];
		}
		else if(v[i]%5==2)
			A3++;
		else if(v[i]%5==3)
		{
			A4+=v[i];
			a4++;
			}
		else if(v[i]%5==4)
			v5.push_back(v[i]);		
	}
	if(A1==0)
		cout<<"N ";
	else
		cout<<A1<<' ';
	if(flag==1)
		cout<<A2<<' ';
	else
		cout<<"N ";
	if(A3)
		cout<<A3<<' ';
	else
		cout<<"N ";
	if(a4)
		printf("%.1lf ",double(A4)/a4);
	else
		cout<<"N "; 
	if(v5.size()==0)
		cout<<"N";
	else
	{	int max=v5[0];
		for(int i=1;i<v5.size();i++)
		{
			if(max<v5[i])
				max=v5[i];
		}
		cout<<max;
	}
	return 0;
} 
