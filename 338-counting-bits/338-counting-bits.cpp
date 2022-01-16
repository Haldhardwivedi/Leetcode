class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>dp(n+1,0);
        int i;
        for(i=1;i<=n;i++)
        {
            if(i%2==1)
                dp[i]=dp[i/2]+1;
            else 
                dp[i]=dp[i/2];
        }
        return(dp);
    }
};