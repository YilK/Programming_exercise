#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
	string str;
	map<string,int> m;
	m["zero"]=0,m["one"]=1;m["two"]=2;m["three"]=3;m["four"]=4;
	m["five"]=5;m["six"]=6;m["seven"]=7;m["eight"]=8;m["nine"]=9;
	while(1)
	{
		getline(cin,str);
		int a;//记录+的位置
		for(int i=0;i<str.size();i++)
			if(str[i]=='+')
				a=i;
		//计算左边的数字
		string temp;
		int zuo=0;
		int you=0;
		for(int j=0;j<a;j++)
		{
			if(str[j]!=' ')
				temp+=str[j];
			else
			{
				zuo=zuo*10+m[temp];
				temp="";
			}
		}
		for(int k=a+1;k<str.size()-1;k++)
		{
			if(str[k]!=' ')
				temp+=str[k];
			else
			{
				you=you*10+m[temp];
				temp="";
			}
		}
		if(zuo==0&&you==0)
			break;
		else
			cout<<zuo+you<<endl; 
	}
	return 0;
}
