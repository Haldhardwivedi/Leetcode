class Solution {
public:
    int jump(vector<int>& nums) {
        int i;
        int n=nums.size();
        int dp[n+1];
        memset(dp,0,sizeof(dp));
        dp[n-1]=0;
        for(i=n-2;i>=0;i--)
        {
            if(i+nums[i]>=n-1)
            {
                dp[i]=1;
            }
            else 
            {
                int j;
                int flag=0;
                int min=INT_MAX;
                for(j=i;j<=i+nums[i]&&j<n;j++)
                {
                    if(min>dp[j]&&dp[j])
                    {
                        min=dp[j];
                    }
                    
                }
                if(min!=INT_MAX)
                {
                    dp[i]=min+1;
                }
            }
        }
        // for(i=0;i<n;i++)
        //     cout<<dp[i]<<" ";
        // cout<<endl;
        return dp[0];
    }
};