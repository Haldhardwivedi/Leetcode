class Solution {
public:
    int numSquares(int n) {
        int i;
        int dp[n+1];
        memset(dp,0,sizeof(dp));
        for(i=1;i*i<=n;i++)
        {
            dp[i*i]=1;
        }
        for(i=2;i<=n;i++)
        {
            if(dp[i])
                continue;
            int j;
            int count=INT_MAX;
            for(j=1;j*j<=i;j++)
            {
                if(i-j*j>=1&&(1+dp[i-j*j])<count)
                    count=1+dp[i-j*j];
            }
            dp[i]=count;
        }
        return dp[n];
    }
};