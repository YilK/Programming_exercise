class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        vector<int> dp(nums.size(),1);//dp[i]��ָ��A[i]Ϊβ����������ĵ�������
        int res=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]<nums[i])
                dp[i]=dp[i-1]+1;
            res=max(res,dp[i]);
        }
        return res;
    }
};
