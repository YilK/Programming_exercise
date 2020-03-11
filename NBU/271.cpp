#include <iostream>
#include <vector>
using namespace std;
struct good
{
	int price;
	double num;
};
int main()
{
	double n;//money 
	int m;//物资总数
	double sum=0;//总物资 
	cin>>n>>m;
	good temp;
	vector<good> v1;
	for(int k=1;k<=m;k++)
	{
		cin>>temp.price;
		cin>>temp.num;
		v1.push_back(temp);
	}
	for(int i=0;i<m-1;i++)
	{
		int min=i;
		for(int j=i+1;j<m;j++)
		{
			if(v1[j].price<v1[min].price)
				min=j;
		}
		if(min!=i)
		{
			good temp2;
			temp2=v1[min];
			v1[min]=v1[i];
			v1[i]=temp2;
		}
	}
	//按价格排序好了
	for(int z=0;z<m;z++)
	{
		if(n>=(v1[z].price*v1[z].num))
		{
			sum+=v1[z].num;
			n=n-(v1[z].price*v1[z].num);
		}
		else if(m>0)
		{
			sum=sum+n/v1[z].price;
			break;
		}
		else
		{
			break;
		}
	}
	printf("%.2lf\n",sum);

	return 0;
} 
