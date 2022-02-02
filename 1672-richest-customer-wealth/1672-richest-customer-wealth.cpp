class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int i,j;
        int ans=INT_MIN;
        int n=accounts.size();
        int m=accounts[0].size();
        for(i=0;i<n;i++)
        {
            int sum=0;
            for(j=0;j<m;j++)
            {
                sum+=accounts[i][j];
            }
            if(sum>ans)
                ans=sum;
        }
        return ans;
    }
};