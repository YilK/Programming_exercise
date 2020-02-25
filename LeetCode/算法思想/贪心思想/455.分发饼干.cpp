class Solution {
public://就是寻找每一步的最优解 
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end()); 
        sort(s.begin(),s.end());
        int num=0;
        int i=0,j=0;
        while(i<g.size()&&j<s.size())
        {
            if(g[i]<=s[j])
            {
                num++;
                i++;
                j++;
            }
            else
            {
                j++;
            }
        }
        return num;
    }
};
