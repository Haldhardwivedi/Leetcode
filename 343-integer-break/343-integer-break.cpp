class Solution {
public:
    int integerBreak(int n) {
        int dp[n+2];
        memset(dp,0,sizeof(dp));
        int i;
        dp[1]=1;
        dp[2]=1;
        if(n<=2)
            return 1;
        else if(n==3)
            return 2;
        for(i=3;i<=n+1;i++)
        {
            int max=INT_MIN;
            int j;
            for(j=1;j<=i;j++)
            {
                if(i-j>=1&&(j*dp[i-j])>max)
                    max=j*dp[i-j];
            }
            dp[i]=max;
        }
        for(i=1;i<=n+1;i++)
            cout<<dp[i]<<" ";
        cout<<endl;
        return dp[n+1];
    }
};