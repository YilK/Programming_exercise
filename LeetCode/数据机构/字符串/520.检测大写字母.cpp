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
        if(a==0)//ȫ��Сд��ĸ
            return true;
        else if(a==word.size())//ȫ�Ǵ�д��ĸ
            return true;
        else if(a==1)
        {
            if('A'<=word[0]&&word[0]<='Z')
                return true;
        }
        return false;
    }
};
