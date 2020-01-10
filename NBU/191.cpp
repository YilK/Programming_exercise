#include <stdio.h>
#include <vector>
using namespace std;
int main()
{
	int num[3][4];
	int i,j,max;
	vector<int> a;
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			scanf("%d",&num[i][j]);
	for(i=0;i<3;i++)
	{
		max=num[i][0];
		for(j=1;j<4;j++)
		{
			if(max<num[i][j])
				max=num[i][j];
		}
		a.push_back(max);
	}
	for(i=0;i<a.size();i++)
		printf("%d\n",a[i]);
	return 0;
}
