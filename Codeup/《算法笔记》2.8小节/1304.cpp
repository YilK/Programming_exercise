#include <iostream>
#include <string>
using namespace std;
struct node
{	
	int num;
	string name;
	char sex;
	int age;
};
int main()
{
	int n;
	cin>>n;
	int num;
	string name;
	char sex;
	int age;
	for(int i=1;i<=n;i++)
	{
		cin>>num>>name>>sex>>age;
		cout<<num<<name<<sex<<age<<endl;
	} 
	return 0;
}
