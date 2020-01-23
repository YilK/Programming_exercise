#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;//学生个数 
	cin>>n;
	string name,number;//输入的学生数据 
	int score;
	int maxscore=-1,minscore=101;
	string maxname,maxnumber,minname,minnumber;//记录下最大与最小 
	for(int i=1;i<=n;i++)
	{
		cin>>name>>number>>score;//输入数据 
		if(score>maxscore)//找最大 
		{
			maxscore=score;
			maxname=name;
			maxnumber=number;
		}
		if(score<minscore)//找最小 
		{
			minscore=score;
			minname=name;
			minnumber=number;
		}
		
	}
	//输出 
	cout<<maxname<<' '<<maxnumber<<endl ;
	cout<<minname<<' '<<minnumber ;
	return 0;
} 
