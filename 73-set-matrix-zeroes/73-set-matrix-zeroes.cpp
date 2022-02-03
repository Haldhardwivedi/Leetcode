class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int>rows,cols;
        int i,j;
        int n=matrix.size();
        int m=matrix[0].size();
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(matrix[i][j]==0)
                {
                    rows.insert(i);
                    cols.insert(j);
                }
            }
        }
        for(auto it=rows.begin();it!=rows.end();it++)
        {
            for(i=0;i<m;i++)
                matrix[*it][i]=0;
        }
        for(auto it=cols.begin();it!=cols.end();it++)
        {
            for(i=0;i<n;i++)
                matrix[i][*it]=0;
        }
    }
};