class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size()>t.size())
            return false;
        if(s=="")
            return true;
        int i=0,j=0;
        while(i<s.size()&&j<t.size())
        {   
            if(s[i]==t[j])
            {
                i++;
                j++;
            }
            else
            {
                j++;
            }
        }
        if(i<=s.size()-1)
            return false;
        else//正常退出的话i=s.size() 
            return true;       
    }
};
