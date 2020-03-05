class Solution {
public:
    int countSegments(string s) {
        int n=0;
        if(s.size()==0)
            return 0;
        int begin=0;//非空格的字符
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')//遇到空格
            {
                if(begin>0)//看前面是否有字符
                    n++;
                begin=0;//重新置为0
            }
            else
            {
                begin++;
            }
        }
        if(begin>0)//处理最后一个字符不是空格的情况
            n++;
        return n;
    }
};
