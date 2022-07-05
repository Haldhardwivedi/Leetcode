class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        int i;
        if(numRows==1)
        {
            ans.push_back({1});
        }
        else 
        {
            ans.push_back({1});
            ans.push_back({1,1});
            for(i=3;i<=numRows;i++)
            {
                vector<int>v;
                int j;
                v.push_back(1);
                for(j=0;j<=i-3;j++)
                {
                    v.push_back(ans[i-2][j]+ans[i-2][j+1]);
                }
                v.push_back(1);
                ans.push_back(v);
            }
        }
        return ans;
    }
};