class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i;
        int n=nums.size();
        int dp[n+1];
        memset(dp,0,sizeof(dp));
        dp[n-1]=1;
        for(i=n-2;i>=0;i--)
        {
            if(i+nums[i]>=n)
            {
                dp[i]=1;
            }
            else 
            {
                int j;
                int flag=0;
                for(j=i;j<=i+nums[i]&&j<n;j++)
                {
                    if(dp[j])
                    {
                        flag=1;
                        dp[i]=1;
                    }
                    
                }
                if(flag==0)
                    dp[i]=0;
            }
        }
        return dp[0];
    }
};