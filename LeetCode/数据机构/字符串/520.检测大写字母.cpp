class Solution {
public:
    bool detectCapitalUse(string word) {
        int a=0;
        for(int i=0;i<word.size();i++)
        {
            if('A'<=word[i]&&word[i]<='Z')
                a++;
            else
                continue;
        }
        if(a==0)//全是小写字母
            return true;
        else if(a==word.size())//全是大写字母
            return true;
        else if(a==1)
        {
            if('A'<=word[0]&&word[0]<='Z')
                return true;
        }
        return false;
    }
};
