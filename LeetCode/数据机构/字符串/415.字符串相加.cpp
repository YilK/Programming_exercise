class Solution {
public:
    string addStrings(string num1, string num2) {
        //字符串加法
        string s;
        if(num1.size()>num2.size())
        {
            int n=num1.size()-num2.size();
            while(n!=0)
            {
                num2='0'+num2;
                n--;
            }
        }
        else
        {
            int n=num2.size()-num1.size();
            while(n!=0)
            {
                num1='0'+num1;
                n--;
            }
        }
        int i=num1.size()-1;
        int p=0;//进位
        while(i>=0)
        {
            int current=(num1[i]-'0')+(num2[i]-'0')+p;//相加
            p=current/10;
            char c='0'+current%10;
            s=c+s;
            i--;
        }
        if(p==1)
            s='1'+s;
        return s;
    }
};
