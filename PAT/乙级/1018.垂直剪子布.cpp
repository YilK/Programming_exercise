#include <iostream>
#include <stdio.h>
#include <map> 
using namespace std;
int judge(char a,char b)
{
	if(a=='C')
	{
		if(b=='J')
			return 1;//��Ӯ��1 
		else if(b=='B')
			return -1;//��Ӯ��-1 
		else
			return 0;//ƽ����0 
	}
	if(a=='J')
	{
		if(b=='B')
			return 1;//��Ӯ��1 
		else if(b=='C')
			return -1;//��Ӯ��-1 
		else
			return 0;//ƽ����0 
	}
	if(a=='B')
	{
		if(b=='C')
			return 1;//��Ӯ��1 
		else if(b=='J')
			return -1;//��Ӯ��-1 
		else
			return 0;//ƽ����0 
	}
}
int main()
{
	int n;
	cin>>n;//����
	int num; 
	int p[3]={0},q[3]={0}; //������һ�ʤ������������ 
	char jia,yi;
	int a[3]={0},b[3]={0};//��¼ʤ�� 
	for(int i=0;i<n;i++)
	{
		 cin>>jia>>yi; //���� 
		 num=judge(jia,yi);//�ж� 
		 if(num==1)//��Ӯ 
		 {
		 	if(jia=='B')//�ж����ĸ�����Ӯ�� 
		 		p[0]++;
		 	else if(jia=='C')
			 	p[1]++;
			else
				p[2]++; 
		 	a[0]++;
			b[2]++; 
		 }
		 else if(num==-1)
		 {
		 	if(yi=='B')
		 		q[0]++;
		 	else if(yi=='C')
			 	q[1]++;
			else
				q[2]++; 
		 	a[2]++;
		 	b[0]++;
		 }
		 else{
		 	a[1]++;
		 	b[1]++; 
		 }
	}
	cout<<a[0]<<' '<<a[1]<<' '<<a[2]<<endl;
	cout<<b[0]<<' '<<b[1]<<' '<<b[2]<<endl;
	int max1=0,max2=0;
	for(int i=0;i<3;i++)//�������� 
	{
		if(p[i]>p[max1])	max1=i;
		if(q[i]>q[max2])	max2=i;
	}
	if(max1==0)//�ж����� 
		cout<<'B'<<' ';
	else if(max1==1)
		cout<<'C'<<' ';
	else
		cout<<'J'<<' ';
	if(max2==0)
		cout<<'B';
	else if(max2==1)
		cout<<'C';
	else
		cout<<'J';
	return 0;
}
