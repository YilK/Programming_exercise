#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;
struct student{
	int number;//学号
	int d_score;//德分 
	int c_score; //才分 
};
bool cmp(student a,student b)//排序的方式 
{
	if((a.c_score+a.d_score)!=(b.c_score+b.d_score))
		return (a.c_score+a.d_score)>(b.c_score+b.d_score);
	else if(a.d_score!=b.d_score)
		return a.d_score>b.d_score;
	else
		return a.number<b.number;
 } 
int main()
{
	int n,l,h;
	cin>>n>>l>>h;  
	vector<student> v[4];//这里要区别于 vector<student> v(4) ,这里相当于创建一个动态的二维数组 
	student temp; 
	int count=0;//记录录取的人数 
	for(int i=0;i<n;i++) 
	{
		cin>>temp.number>>temp.d_score>>temp.c_score;//输入数据 
		if(temp.d_score>=l&&temp.c_score>=l)
		{
			count++;//合格人数加1
			if(temp.d_score>=h)
			{
				if(temp.c_score>=h)
					v[0].push_back(temp);//第一档 
				else
					v[1].push_back(temp);//第二档 
			}
			else
			{
				if(temp.c_score<h&&temp.d_score>=temp.c_score)
					v[2].push_back(temp);//第三档 
				else
					v[3].push_back(temp); //第四档 
			} 
		 } 
	}
	for(int i=0;i<4;i++)
		sort(v[i].begin(),v[i].end(),cmp);//按要求进行排序 
	cout<<count<<endl;//输出合格的人数 
	for(int i=0;i<4;i++)//输出排序好的数据 
	{
		for(int j=0;j<v[i].size();j++)
		{
			if(i==3&&j==v[i].size()-1)
				printf("%d %d %d",v[i][j].number,v[i][j].d_score,v[i][j].c_score);
			else printf("%d %d %d\n",v[i][j].number,v[i][j].d_score,v[i][j].c_score);
		}
	}
	return 0;
 } 
