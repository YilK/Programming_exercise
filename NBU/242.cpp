#include <iostream>
using namespace std;
int main()
{
	double s;//����
	double v;//�ٶ�
	double x;//ÿ�������Ϳ�����ʻ�Ĺ�����
	double price;//ÿ�������͵ļ۸�
	cin>>s>>v>>x>>price;
	printf("%.1lf %.1f\n",s/v,s/x*price);
	return 0; 
} 
