#include <iostream>
using namespace std;
int main()
{
	int year,month,day;
	cin>>year>>month>>day;
	printf("PRC form:%d/%d/%d\n",year,month,day);
	printf("UK form:%d/%d/%d\n",day,month,year);
	printf("USA form:%d/%d/%d\n",month,day,year);
	return 0;
} 
