#include <iostream> 
#include <string>
#include <vector> 
#include <map>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int num=0;
	string temp;
	vector<string> s;//存储身份证信息 
	map<int,char> m;
	m[0]='1';m[1]='0';m[2]='X';m[3]='9';m[4]='8';m[5]='7';m[6]='6';m[7]='5';m[8]='4';m[9]='3';m[10]='2';//正确的校验码 
	int a[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};//权重 
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		if(temp.size()==18)
			s.push_back(temp);
	}
	for(int i=0;i<s.size();i++)
	{
		int sum=0;
		for(int j=0;j<17;j++)
		{
			sum=sum+(s[i][j]-'0')*a[j];
		} 
		sum=sum%11;//得到z；
		if(m[sum]!=s[i][17]){
			cout<<s[i]<<endl;
			num++;
		}
	}
	if(num==0)
		cout<<"All passed";
	return 0;
}
