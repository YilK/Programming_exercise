#include <iostream> 
#include <string> 
using namespace std; 
int main() {    
	string s;    
	cin >> s;//输入字符串中 
	int sum = 0; //数字之和   
	string str[10] =  {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};    
	for (int i = 0; i < s.length(); i++) 
	       sum += (s[i] - '0');    
	string num = to_string(sum);//将数字转换为字符串   
	for (int i = 0; i < num.length(); i++) 
	{        
		if (i != 0) 
			cout << " ";        
		cout << str[num[i] - '0'];    
	}    
	return 0; 
}

