#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;
struct student{
	int number;//ѧ��
	int d_score;//�·� 
	int c_score; //�ŷ� 
};
bool cmp(student a,student b)//����ķ�ʽ 
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
	vector<student> v[4];//����Ҫ������ vector<student> v(4) ,�����൱�ڴ���һ����̬�Ķ�ά���� 
	student temp; 
	int count=0;//��¼¼ȡ������ 
	for(int i=0;i<n;i++) 
	{
		cin>>temp.number>>temp.d_score>>temp.c_score;//�������� 
		if(temp.d_score>=l&&temp.c_score>=l)
		{
			count++;//�ϸ�������1
			if(temp.d_score>=h)
			{
				if(temp.c_score>=h)
					v[0].push_back(temp);//��һ�� 
				else
					v[1].push_back(temp);//�ڶ��� 
			}
			else
			{
				if(temp.c_score<h&&temp.d_score>=temp.c_score)
					v[2].push_back(temp);//������ 
				else
					v[3].push_back(temp); //���ĵ� 
			} 
		 } 
	}
	for(int i=0;i<4;i++)
		sort(v[i].begin(),v[i].end(),cmp);//��Ҫ��������� 
	cout<<count<<endl;//����ϸ������ 
	for(int i=0;i<4;i++)//�������õ����� 
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
