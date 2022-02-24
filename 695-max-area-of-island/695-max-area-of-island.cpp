class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int i,j;
        int visited[n][m];
        memset(visited,0,sizeof(visited));
        int ans=INT_MIN;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                int count=0;
                if(grid[i][j]&&visited[i][j]==0)
                {
                    stack<pair<int,int>>s;
                    s.push(make_pair(i,j));
                    while(!s.empty())
                    {
                        int p=s.top().first;
                        int q=s.top().second;
                        if(visited[p][q])
                        {
                            s.pop();
                            continue;
                        }
                        count++;
                        visited[p][q]=1;
                        s.pop();
                        if(q-1>=0&&grid[p][q-1]&&visited[p][q-1]==0)
                        {
                            s.push({p,q-1});
                        }
                        if(q+1<m&&grid[p][q+1]&&visited[p][q+1]==0)
                        {
                            s.push({p,q+1});
                        }
                        if(p+1<n&&grid[p+1][q]&&visited[p+1][q]==0)
                        {
                            s.push({p+1,q});
                        }
                        if(p-1>=0&&grid[p-1][q]&&visited[p-1][q]==0)
                        {
                            s.push({p-1,q});
                        }
                    }
                    //cout<<"tha"<<endl;
                    ans=max(ans,count);
                }
            }
        }
        ans=max(ans,0);
        return ans;
    }
};