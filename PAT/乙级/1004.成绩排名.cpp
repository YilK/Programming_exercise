#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;//ѧ������ 
	cin>>n;
	string name,number;//�����ѧ������ 
	int score;
	int maxscore=-1,minscore=101;
	string maxname,maxnumber,minname,minnumber;//��¼���������С 
	for(int i=1;i<=n;i++)
	{
		cin>>name>>number>>score;//�������� 
		if(score>maxscore)//����� 
		{
			maxscore=score;
			maxname=name;
			maxnumber=number;
		}
		if(score<minscore)//����С 
		{
			minscore=score;
			minname=name;
			minnumber=number;
		}
		
	}
	//��� 
	cout<<maxname<<' '<<maxnumber<<endl ;
	cout<<minname<<' '<<minnumber ;
	return 0;
} 
