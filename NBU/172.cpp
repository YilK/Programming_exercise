#include <stdio.h>
#include <vector>
using namespace std;
int main()
{
	vector<int> a;
	int num,m;
	scanf("%d",&num);
	while(num!=0)
	{
		m=num%8;
		num=num/8;
		a.push_back(m);
	}
	for(int i=a.size()-1;i>=0;i--)
		printf("%d ",a[i]) ;
	printf("\n");
	return 0;
}
