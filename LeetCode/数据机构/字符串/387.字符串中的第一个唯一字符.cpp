class Solution {
public:
    int firstUniqChar(string s) {
        int hash[26]={0};
        for(int i=0;i<s.size();i++)
            hash[s[i]-'a']++;
        for(int j=0;j<s.size();j++)
        {
            if(hash[s[j]-'a']==1)
                return j;
        }
        return -1;
    }
};
//与次数相关的直接用hash 
