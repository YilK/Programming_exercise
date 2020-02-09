#include <iostream>
#include <algorithm>
using namespace std;
bool isPalindrome(int x) {
    string s1=to_string(x);
    string s2=s1;
    string s2=reverse(s1.begin(),s1.begin()+len);
    if(s1==s2)
        return true;
    else
        return false;
} 
int main()
{
	return 0; 
}

