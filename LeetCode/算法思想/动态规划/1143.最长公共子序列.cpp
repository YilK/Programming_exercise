class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        string s1=" "+text1;
        string s2=" "+text2;
        int n=text1.size();
        int m=text2.size();
        int dp[1000][1000]={0};
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                if(i==0||j==0)
                {
                    dp[i][j]=0;
                    continue;
                }
                if(s1[i]==s2[j])
                    dp[i][j]=dp[i-1][j-1]+1;
                else
                {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
                
            }
        }
        return dp[n][m];
    }
};
