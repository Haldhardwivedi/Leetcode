class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int i,j;
        int dp[n+1][m+1];
        memset(dp,0,sizeof(dp));
        dp[n-1][m-1]=grid[n-1][m-1];
        for(i=m-2;i>=0;i--)
            dp[n-1][i]=dp[n-1][i+1]+grid[n-1][i];
        for(i=n-2;i>=0;i--)
            dp[i][m-1]=dp[i+1][m-1]+grid[i][m-1];
        for(i=n-2;i>=0;i--)
        {
            for(j=m-2;j>=0;j--)
            {
                dp[i][j]=min(dp[i+1][j],dp[i][j+1])+grid[i][j];
            }
        }
        return dp[0][0];
    }
};