class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int i,n=coins.size();
        long long dp[amount+1];
        memset(dp,0,sizeof(dp));
        for(i=0;i<n;i++)
        {
            if(coins[i]<=amount)
            dp[coins[i]]=1;
        }
        for(i=1;i<=amount;i++)
        {
            int j;
            int M=INT_MAX;
            for(j=0;j<n;j++)
            {
                if(i-coins[j]>=0&&dp[i-coins[j]]!=0&&dp[i-coins[j]]<M)
                    M=dp[i-coins[j]];
            }
            if(M!=INT_MAX&&dp[i]==0)
            {
                dp[i]=1+M;
            }
        }
        // for(i=1;i<=amount;i++)
        //     cout<<dp[i]<<" ";
        // cout<<endl;
        if(dp[amount]==0&&amount!=0)
            return -1;
        return dp[amount];
    }
};