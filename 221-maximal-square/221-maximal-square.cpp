class Solution {
public:
    
    int maximalSquare(vector<vector<char>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int i,j;
        int dp[n+1][m+1];
        memset(dp,0,sizeof(dp));
        for(i=0;i<m;i++)
        {
            if(matrix[n-1][i]=='1')
            {
                dp[n-1][i]=1;
            }
        }
        for(i=0;i<n;i++)
        {
            if(matrix[i][m-1]=='1')
            {
                dp[i][m-1]=1;
            }
        }
        for(j=m-2;j>=0;j--)
        {
            for(i=n-2;i>=0;i--)
            {
                if(matrix[i][j]=='0')
                    dp[i][j]=0;
                else 
                {
                    int left=dp[i][j+1];
                    int right=dp[i+1][j];
                    int diag=dp[i+1][j+1];
                    dp[i][j]=1+min(left,min(right,diag));
                }
            }
        }
        int ans=INT_MIN;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(dp[i][j]>ans)
                    ans=dp[i][j];
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
        return ans*ans;
    }
};