class Solution {
public:
    int lengthOfLastWord(string s) {
        int num=0;
        int m=s.size();
        int i=m-1;
        while(s[i]==' ')//注意末尾都是空格的情况 ，要略去末尾的空格
            i--;
        while(i>=0)//从末尾开始数
        {
            if(isalpha(s[i]))
            {
                num++;
                i--;
            }
            else
                break;
        }
        return num;
    }
};
