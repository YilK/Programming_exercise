class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int len=s.length();
        int lent=t.length();
        if(len!=lent)
            return false;
        map<char,char> stot;
        map<char,char> ttos;
        for(int i=0;i<len;i++)
        {
            if(stot.find(s[i])!=stot.end()&&stot[s[i]]!=t[i]||
               ttos.find(t[i])!=ttos.end()&&ttos[t[i]]!=s[i])  
                return false;
            stot[s[i]]=t[i];
            ttos[t[i]]=s[i];
        }
        return true;
    }
};
