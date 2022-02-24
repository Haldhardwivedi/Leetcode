class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int i,j;
        int visited[n][m];
        memset(visited,0,sizeof(visited));
        int ans=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                int count=0;
                if(grid[i][j]==49&&visited[i][j]==0)
                {
                    // cout<<i<<" "<<j<<endl;
                    count++;
                    stack<pair<int,int>>s;
                    s.push({i,j});
                    while(!s.empty())
                    {
                        int p=s.top().first;
                        int q=s.top().second;
                        visited[p][q]=1;
                        //cout<<p<<" "<<q<<endl;
                        s.pop();
                        if(q+1<m&&grid[p][q+1]==49&&visited[p][q+1]==0)
                        {
                            s.push({p,q+1});
                        }
                        if(p+1<n&&grid[p+1][q]==49&&visited[p+1][q]==0)
                        {
                            s.push({p+1,q});
                        }
                        if(p-1>=0&&grid[p-1][q]==49&&visited[p-1][q]==0)
                        {
                            s.push({p-1,q});
                        }
                         if(q-1>=0&&grid[p][q-1]==49&&visited[p][q-1]==0)
                        {
                            s.push({p,q-1});
                        }
                    }
                    //cout<<"count"<<endl;
                }
                ans+=count;
            }
        }
        return ans;
    }
};