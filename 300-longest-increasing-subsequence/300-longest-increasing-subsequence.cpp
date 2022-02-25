class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        int dp[n];
        memset(dp,0,sizeof(dp));
        int i;
        int max=INT_MIN;
        for(i=0;i<n;i++)
        {
            int j;
            dp[i]=1;
            for(j=0;j<i;j++)
            {
                if(nums[i]>nums[j]&&dp[i]<dp[j]+1)
                {
                    dp[i]=dp[j]+1;
                }
            }
            if(dp[i]>max)
                max=dp[i];
        }
        // for(i=0;i<n;i++)
        //     cout<<dp[i]<<" ";
        //cout<<endl;
        return  max;
    }
};