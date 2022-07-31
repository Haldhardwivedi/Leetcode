class Solution {
public:
    int numSquares(int n) {
        int dp[n+2];
        memset(dp,0,sizeof(dp));
        int i;
        for(i=1;i*i<=n;i++)
        {
            dp[i*i]=1;
        }
        if(dp[n]==1)
        {
            return 1;
        }
        else 
        {
            for(i=2;i<=n;i++)
            {
                if(dp[i]==0)
                {
                    int min=INT_MAX;
                    int j;
                    for(j=1;j*j<=n&&i-j*j>=0;j++)
                    {
                        if(min>dp[i-j*j]+1)
                        {
                            min=dp[i-j*j]+1;
                        }
                    }
                    dp[i]=min;
                }
            }
            return dp[n];
        }
        return -1;
    }
};