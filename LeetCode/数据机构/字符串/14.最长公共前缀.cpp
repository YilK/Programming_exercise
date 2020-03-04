class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0)
            return "";//一开始没写这个没通过
        string s;
        int min=strs[0].size();
        for(int i=1;i<strs.size();i++)
            if(min>strs[i].size())
                min=strs[i].size();
        //找到最小的长度
        int j=0;
        while(j<min)
        {
            char a=strs[0][j];//记录第一个字符，然后遍历每一个字符串的第一个字符
            for(int i=0;i<strs.size();i++)
            {
                if(strs[i][j]!=a)
                {
                    return s;
                }
            }
            s=s+a;
            j++;
        }
        return s;
    }
};
