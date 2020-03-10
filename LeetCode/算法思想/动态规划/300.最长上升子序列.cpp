class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> dp(nums.size());//dp[i]表示以第i个元素位结尾的最长递增子序列的元素个数
        for(int i=0;i<nums.size();i++)
            dp[i]=1;//初始化，因为每一个都必须包括自己
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[j]<nums[i])
                {
                    dp[i]=max(dp[i],dp[j]+1);
                }
                    
            }
        }
        int max=0;
        for(int i=0;i<nums.size();i++)
            if(max<dp[i])
                max=dp[i];
        return max;

    }
};
