class Solution {
public:
    int uniquePaths(int m, int n) {
        int i,j;
        int dp[n+1][m+1];
        memset(dp,0,sizeof(dp));
        dp[n-1][m-1]=1;
        for(i=m-2;i>=0;i--)
            dp[n-1][i]=1;
        for(i=n-2;i>=0;i--)
            dp[i][m-1]=1;
        for(i=n-2;i>=0;i--)
        {
            for(j=m-2;j>=0;j--)
            {
                dp[i][j]=dp[i+1][j]+dp[i][j+1];
            }
        }
        return dp[0][0];
    }
};