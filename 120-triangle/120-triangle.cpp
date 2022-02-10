class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int i,j;
        int n=triangle.size();
        int dp[n+1][n+1];
        //cout<<n<<endl;
        memset(dp,0,sizeof(dp));
        for(i=0;i<n;i++)
        {
            dp[n-1][i]=triangle[n-1][i];
        }
        for(i=n-2;i>=0;i--)
        {
            for(j=0;j<triangle[i].size();j++)
            {
                dp[i][j]=min(dp[i+1][j],dp[i+1][j+1])+triangle[i][j];
            }
        }
        // for(i=0;i<n;i++)
        // {
        //     for(j=0;j<n;j++)
        //         cout<<dp[i][j]<<" ";
        //     cout<<endl;
        // }
        return dp[0][0];
    }
};