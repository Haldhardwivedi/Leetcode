class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        long long int count=0;
        int i,j,n=grid.size();
        for(i=0;i<n;i++)
        {
            int left=0;
            int right=grid[i].size()-1;
            while(left<=right)
            {
                long long int mid=left+(right-left)/2;
                if(grid[i][mid]>=0)
                {
                    left=mid+1;
                }
                else 
                    right=mid-1;
            }
            //cout<<grid[i][left]<<endl;
           //cout<<left<<endl;
            count=count+(grid[i].size()-left);
        }
        return(count);
    }
};