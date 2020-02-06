#include <iostream>//score 22 ac 不了淦 运行超时 
#include <string>
#include <vector> 
#include <algorithm>
#include <unordered_map>
using namespace std;
struct student{
	string number;
	int score;
};
struct sign{
	int type;//类型
	string zhi; 
};
struct site{
	string siteid;
	int cnt;
};
bool cmp(student a,student b)
{
	if(a.score==b.score)	return a.number<b.number;
	else	return a.score>b.score;	
}
bool cmp1(site a,site b)
{
	return a.cnt==b.cnt?a.siteid<b.siteid:a.cnt>b.cnt;
}
int main()
{
	int n;//考生人数
	int	m;// 统计要求的个数
	cin>>n>>m;
	vector<student> v1(n);
	for(int i=0;i<n;i++)
		cin>>v1[i].number>>v1[i].score;
	vector<sign> v2(m);
	for(int i=0;i<m;i++)
		cin>>v2[i].type>>v2[i].zhi;	
//	for(int i=0;i<m;i++)
//		cout<<v2[i].i<<' '<<v2[i].zhi<<endl;
	for(int i=0;i<m;i++)
	{
		printf("Case %d: %d %s\n",i+1,v2[i].type,v2[i].zhi.c_str());
		if(v2[i].type==1)
		{
			vector<student> v3;
			for(int j=0;j<n;j++)
			{	
				if(v1[j].number.substr(0,1)==v2[i].zhi)
					v3.push_back(v1[j]);
			}
			sort(v3.begin(),v3.end(),cmp);
			if(v3.size()==0)
				printf("NA\n");
			else
				for(int k=0;k<v3.size();k++)
					printf("%s %d\n",v3[k].number.c_str(),v3[k].score);
		}
		else if(v2[i].type==2)
		{
			int flag=1;
			int count=0;
			int sum=0;
			for(int j=0;j<n;j++)
			{
				string s=v1[j].number.substr(1,3);
				if(s==v2[i].zhi)
				{
					flag=0;
					count++;
					sum+=v1[j].score;
				}
			}
			if(flag==0)
				printf("%d %d\n",count,sum);
			else
				printf("NA\n");
		}
		else if(v2[i].type==3)
		{
			unordered_map<string,int> m;
			for(int j=0;j<n;j++)
			{
				if(v1[j].number.substr(4,6)==v2[i].zhi){
					string tt=v1[j].number.substr(1,3);
					m[tt]++;
				}
			}
			vector<site> ans;
			for(auto it:m)
				ans.push_back({it.first,it.second});
			sort(ans.begin(),ans.end(),cmp1);
			if(ans.size()==0)
				printf("NA\n");
			else
				for(int k=0;k<ans.size();k++)
						cout<<ans[k].siteid<<' '<<ans[k].cnt<<endl;
		}
	}
	return 0;
	
	
}
