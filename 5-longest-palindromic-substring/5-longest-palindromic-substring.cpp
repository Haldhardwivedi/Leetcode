class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int dp[n+1][n+1];
        int i;
        memset(dp,0,sizeof(dp));
        int j;
        // dp[i][j]==1 implies that it's a substring 
        for(i=0;i<n;i++)
        {
            dp[i][i]=1; //substring of size of 1 
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if((j-i)==1&&s[i]==s[j])
                    dp[i][j]=1; //substring of size 2
            }
             //dp[i][i+1]=1;
        }
        int l=INT_MIN;
        int left=-1;
        int right=-1;
        for(i=n-1;i>=0;i--)
        {
            for(j=n-1;j>=0;j--)
            {
                if(dp[i][j]==0&&(i+1)<n&&(j-1)>=0)
                {
                    if(s[i]==s[j])
                    dp[i][j]=dp[i+1][j-1];//i,j is palindrome if (i+1,j-1) and s[i]==s[j]
                }
                if(dp[i][j]&&j-i+1>l)
                {
                    left=i;
                    right=j;
                    l=j-i+1;
                    //cout<<l<<endl;
                }
            }
        }
        // for(i=0;i<n;i++)
        // {
        //     for(j=0;j<n;j++)
        //         cout<<dp[i][j]<<" ";
        //     cout<<endl;
        // }
        string ans;
        ans=s.substr(left,right-left+1);
        return ans;
    }
};