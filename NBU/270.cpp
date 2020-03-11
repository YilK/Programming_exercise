#include <iostream>
#include <vector>
using namespace std;
struct book{
	int shujiahao; 
	int time;
	int num;
};

int main()
{
	int t,n;
	cin>>t>>n;
	vector<book> v;
	vector<int> v2;
	book temp;
	for(int i=1;i<=n;i++)
	{
		cin>>temp.time;
		cin>>temp.num;
		temp.shujiahao=i;
		v.push_back(temp);
	}
	//排序
	for(int i=0;i<v.size()-1;i++)
	{
		int min=i;
		for(int j=i+1;j<v.size();j++)
		{
			if(v[j].time<v[min].time)
				min=j;
		} 
		if(min!=i)
		{
			book t;
			t=v[i];
			v[i]=v[min];
			v[min]=t;
		}
	} 
	for(int i=0;i<v.size();i++)
	{
		if(t>=(v[i].time))//剩余时间能看 
		{
			t=t-(v[i].time*v[i].num);
			v2.push_back(v[i].shujiahao);
		}
		else if(t>0&&t<(v[i].time))
		{
			v2.push_back(v[i].shujiahao);
			break;	
		}
		else
			break;
	}
	for(int i=0;i<v2.size();i++)
		cout<<v2[i]<<endl;
	return 0;
}
 
