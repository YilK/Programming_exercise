#include <iostream>
#include <vector>
using namespace std;
int gcd(int a,int b)
{
	int c=b;
	while(a%b!=0)
	{
		c=a%b;
		a=b;
		b=c;
	}
	return  c;
}
int main()
{
	int n1,m1,n2,m2,k;
	scanf("%d/%d %d/%d %d",&n1,&m1,&n2,&m2,&k);
	int i;
	if(n1*m2>n2*m1)
	{
		int temp=n1;
		n1=n2;
		n2=temp;
		temp=m1;
		m1=m2;
		m2=temp;
	}
	int num=1;
	vector<int> v;
	while(n1*k>=m1*num)	num++;
	while(n1 * k < m1 * num && m2 * num < n2 * k)
	{
		if(gcd(num,k)==1)
		{
			v.push_back(num);
		}
		num++;
	}
	for(i=0;i<v.size();i++)
	{
		if(i==v.size()-1)
			cout<<v[i]<<'/'<<k;
		else
			cout<<v[i]<<'/'<<k<<' ';
	}
	return 0;
}