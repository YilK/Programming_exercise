class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1)
            return s;
        int step=numRows*2-2;
        string ans="";
        for(int i=0;i<s.size();i=i+step)
        {
            ans+=s[i];
        }
        for(int i=1;i<numRows-1;i++)
        {
            for(int j=i;j<s.size();)
            {
                ans+=s[j];
                j=j+step-2*i;
                if(j<s.size())
                {
                    ans+=s[j];
                    j=j+2*i;
                }
            }
        }
        for(int i=numRows-1;i<s.size();i=i+step)
            ans+=s[i];
        return ans;
    }
};
