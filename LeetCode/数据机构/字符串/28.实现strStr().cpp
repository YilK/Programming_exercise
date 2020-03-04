class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()==0||haystack==needle)
            return 0;
        if(needle.size()>haystack.size())
            return -1;
        int i=0;
        int j=0;
        for(i=0;i<haystack.size();i++)
        {
            if(j==needle.size())
                return i-needle.size();
            if(haystack[i]==needle[j])
                j++;
            else
            {
                i=i-j;//这句话重要
                j=0;
            }
        }
        if(j==needle.size())
            return i-needle.size();
        return -1;
        
    }
};
