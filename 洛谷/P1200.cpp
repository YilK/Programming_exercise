#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a,b;
	cin>>a>>b;
	int suma=1;
	int sumb=1;
	int i;
	for(i=0;i<a.size();i++)
		suma=suma*(a[i]-'A'+1);
	
	for(i=0;i<b.size();i++)
		sumb=sumb*(b[i]-'A'+1);
	if(suma%47==sumb%47)
		cout<<"GO"<<endl;
	else
		cout<<"STAY"<<endl;
	return 0;
}
