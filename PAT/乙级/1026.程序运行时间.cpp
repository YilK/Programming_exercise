#include <stdio.h>
int main()
{
	int c1,c2;
	int num; 
	scanf("%d %d",&c1,&c2);
	num=(c2-c1+50)/100;
	int h;
	h=num/3600;
	c1=num%3600/60;
	c2=num%3600%60;
//	printf("%d",num);
	printf("%02d:%02d:%02d",h,c1,c2);
	return 0;
 } 
 //����
 /*��ĿҪ����1���ʱ���������뵽�룬�����ȸ�(b-a)����50��
 �������(b-a)/100��С��λ���ڵ���0.5����λ��
 С�ڵ���0.5�����ȥ������n = ((b �C a) + 50) / 100 
