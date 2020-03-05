class Solution {
public:
    string reverseLeftWords(string s, int n) {
        for(int i=0;i<n;i++)
        {
            s=s+s[i];
            
        }
        string s2;
        for(int j=n;j<s.size();j++)
            s2+=s[j];
        return s2;
            
    }
};

