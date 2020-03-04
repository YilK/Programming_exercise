class Solution {
public:
    bool isPalindrome(string s) {
        string a;
        for(int i=0;i<s.size();i++)
        {
            if('A'<=s[i]&&s[i]<='Z')//cctype-----isupper()---islower()----isdigit()---isalpha();
                a+=(s[i]+32);
            else if('a'<=s[i]&&s[i]<='z'||'0'<=s[i]&&s[i]<='9')
                a+=s[i];
            else
                continue;
        }
        //
        int i=0;
        int j=a.size()-1;
        while(i<=j)//这里是关键，前面是预处理 
        {
            if(a[i]!=a[j])
                return false;
            i++;j--;
        }
        return true; 
    }
};
