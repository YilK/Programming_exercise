class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> dp(nums.size());//dp[i]��ʾ�Ե�i��Ԫ��λ��β������������е�Ԫ�ظ���
        for(int i=0;i<nums.size();i++)
            dp[i]=1;//��ʼ������Ϊÿһ������������Լ�
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
