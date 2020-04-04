/*这一次你被要求说出所有男生中最低分和所有女生中最高分的区别。
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct node{
	string name;
	char gender;
	string ID;
	int grade;
	
};
int main()
{
	int n;
	cin>>n;
	vector<node> vf;
	vector<node> vm;
	int i;
	for(i=0;i<n;i++)
	{
		node temp;
		cin>>temp.name>>temp.gender>>temp.ID>>temp.grade;
		if(temp.gender=='M')
			vm.push_back(temp);
		else
			vf.push_back(temp);
	}
	//sort male
	int j;
	if(vm.size()!=0) 
	{	for(i=0;i<vm.size()-1;i++)
		{
			int min=i;
			for(j=i+1;j<vm.size();j++)
				if(vm[j].grade<vm[min].grade)
					min=j;
			if(min!=i)
			{
				node temp=vm[min];
				vm[min]=vm[i];
				vm[i]=temp;
			}
		}
	}	
	//sort female
	if(vf.size()!=0)
		for(i=0;i<vf.size()-1;i++)
		{
			int min=i;
			for(j=i+1;j<vf.size();j++)
				if(vf[j].grade<vf[min].grade)
					min=j;
			if(min!=i)
			{
				node temp=vf[min];
				vf[min]=vf[i];
				vf[i]=temp;
			}
		}
	if(vm.size()&&vf.size())
	{
		cout<<vf[vf.size()-1].name<<' '<<vf[vf.size()-1].ID<<endl;
		cout<<vm[0].name<<' '<<vm[0].ID<<endl;
		cout<<vf[vf.size()-1].grade-vm[0].grade<<endl;
	}
	else
	{
		if(vf.size()==0)
		{	
			cout<<"Absent"<<endl;
			cout<<vm[0].name<<' '<<vm[0].ID<<endl;
		}
		else
		{
			cout<<vf[vf.size()-1].name<<' '<<vf[vf.size()-1].ID<<endl;
			cout<<"Absent"<<endl;
		}
		cout<<"NA"<<endl;
	}
	return 0;
}
