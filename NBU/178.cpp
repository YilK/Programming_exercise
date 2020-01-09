#include <stdio.h>
#include <vector>
using namespace std;
int main()
{
	int n,i,j;
	scanf("%d",&n);
	vector<int> v1(n);
	for(i=0;i<v1.size();i++)//输入数据 
		scanf("%d",&v1[i]);
	int number;
	vector<int> v2;
//	for(i=0;i<v1.size();i++)//输入数据 
//		printf("%d ",v1[i]);
	for(i=0;i<v1.size();i++)
	{
		int flag=0;
		number=v1[i];
		for(j=0;j<v2.size();j++)
		{
			if(number==v2[j]){
				flag=1;
				break;
			}
		}
		if(flag==1)
			continue;
		else{
			for(j=0;j<v1.size();j++){
				if(j==i)
					continue;
				else{
					if(number==v1[j]){
						v2.push_back(number);
						break;
					}
				}
		
			}
		}
	}
	if(v2.size()==0)
		printf("-1\n");
	else
	{
	
		for(i=0;i<v2.size();i++)
		{
			if(i==v2.size()-1)
				printf("%d\n",v2[i]);
			else
				printf("%d ",v2[i]);
		}
	}
	return 0;
}
