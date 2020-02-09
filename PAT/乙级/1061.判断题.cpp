#include <iostream>//思路就是放到二维数组上去做   score 15 
using namespace std;
int main()
{
	int n;//学生人数
	int m;//判断题数量
	cin>>n>>m;
	int a[2+n][m];
	for(int i=0;i<n+2;i++)
		for(int j=0;j<m;j++)
			cin>>a[i][j];
	for(int i=2;i<n+2;i++)
	{
		int sum=0;
		for(int j=0;j<m;j++)
		{
			if(a[i][j]==a[1][j])
				sum+=a[0][j];
		}
		cout<<sum<<endl;
	}
	return 0; 
 } 
