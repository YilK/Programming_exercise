#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n;
	char c;
	cin>>n>>c;//���� 
	vector<int> v;
	v.push_back(1);
	int sum=1; 
	for(int i=3;;i=i+2)//������ɳ©ÿһ���ж��ٷ��� 
	{
		if(sum+2*i<=n)
		{
			v.push_back(i);
			sum=sum+2*i;
		}
		else
			break;		
	}
	sum=n-sum;//û�õ��ķ����� 
	for(int i=0;i<v.size();i++)//����ϰ��ɳ© 
	{
		for(int j=1;j<=(v[v.size()-1]-v[v.size()-i-1])/2;j++)//����ո��� 
			cout<<' ';
		for(int j=1;j<=v[v.size()-i-1];j++) 
			cout<<c;
		cout<<endl;
	}
	for(int i=1;i<v.size();i++)//����°��ɳ© 
	{
		for(int j=1;j<=(v[v.size()-1]-v[i])/2;j++)//����ո��� 
			cout<<' ';
		for(int j=1;j<=v[i];j++)
			cout<<c;
		cout<<endl;
	}
	cout<<sum;
	return 0;
}
