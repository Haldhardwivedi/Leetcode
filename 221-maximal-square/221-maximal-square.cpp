class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int dp[n+1][m+1];
        memset(dp,0,sizeof(dp));
        int i,j;
        int ans=INT_MIN;
        for(i=0;i<n;i++)
        {
            if(matrix[i][m-1]=='1')
                dp[i][m-1]=1;
            if(dp[i][m-1]>ans)
                ans=dp[i][m-1];
        }
        for(i=0;i<m;i++)
        {
            if(matrix[n-1][i]=='1')
                dp[n-1][i]=1;
            if(dp[n-1][i]>ans)
                ans=dp[n-1][i];
        }
        for(i=n-2;i>=0;i--)
        {
            for(j=m-2;j>=0;j--)
            {
                if(matrix[i][j]=='0')
                    dp[i][j]=0;
                else 
                {
                    int left=dp[i][j+1];
                    int down=dp[i+1][j];
                    int diag=dp[i+1][j+1];
                    dp[i][j]=1+min(left,min(down,diag));
                    if(dp[i][j]>ans)
                        ans=dp[i][j];
                }
            }
        }
        // for(i=0;i<n;i++)
        // {
        //     for(j=0;j<m;j++)
        //     {
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        //ans=max(0,ans);
        return ans*ans;
    }
};