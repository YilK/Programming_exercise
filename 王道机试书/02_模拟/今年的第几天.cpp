#include <iostream>
using namespace std;
int main()
{
	int y,m,d;
	cin>>y>>m>>d;
	//要判断是否是闰年的
	int sum=0;
	switch(m)
	{
		case 1:sum=0;break;
		case 2:sum=31;break;
		case 3:sum=60;break;
		case 4:sum=91;break;
		case 5:sum=121;break;
		case 6:sum=152;break;
		case 7:sum=182;break;
		case 8:sum=213;break;
		case 9:sum=244;break;
		case 10:sum=274;break;
		case 11:sum=305;break;
		case 12:sum=335;break;
	} 
    if(m<=2)
        cout<<sum+d;
    else
    {    
	    if(y%4==0&&y%100!=0||y%100==0&&y%400==0)
		    cout<<sum+d;
	    else
		    cout<<sum+d-1;
    }
	return 0;
}
