#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
struct student {
	long long int no;//准考证号
	int score;
	int finrank;//排名 
	int loca;//考场号
	int locarank;//考场内排名 
};
bool cmp1(student a,student b)
{	
	//首先按分数排，分数相同按学号排 
	return a.score!=b.score?a.score>b.score:a.no<b.no;
}
int main()
{
	int n,m;
	scanf("%d",&n);//考场数
	vector<student> fin; 
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&m);//每一个考场内的人数
		vector<student> v(m);
		for(int j=0;j<m;j++)
		{
			scanf("%lld %d",&v[j].no,&v[j].score);
			v[j].loca=i;//设置考场号 
		}
		sort(v.begin(),v.end(),cmp1);//按分数排好
		v[0].locarank=1;//考场内排名 
		fin.push_back(v[0]);
		for(int j=1;j<m;j++)
		{
			v[j].locarank=(v[j].score==v[j-1].score)?(v[j-1].locarank):(j+1);
			fin.push_back(v[j]);
		}
	 } 
	 sort(fin.begin(),fin.end(),cmp1);
	 fin[0].finrank=1;
	 for(int j=1;j<fin.size();j++)
	 {
	 	fin[j].finrank=(fin[j].score==fin[j-1].score)?(fin[j-1].finrank):(j+1);
	 }
	 printf("%d\n",fin.size());
	 for(int i=0;i<fin.size();i++)
	 {
	 	if(i==fin.size()-1)
	 		printf("%013lld %d %d %d",fin[i].no,fin[i].finrank,fin[i].loca,fin[i].locarank);
		else
	 		printf("%013lld %d %d %d\n",fin[i].no,fin[i].finrank,fin[i].loca,fin[i].locarank);
	 }
	 return 0;
}
