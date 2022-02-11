class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int count=0;
        stack<int>s;
        int n=isConnected.size();
        vector<bool>visited(n,false);
        int i;
        for(i=0;i<n;i++)
        {
            if(visited[i]==false)
            {
                s.push(i);
                count++;
            }
            while(!s.empty())
            {
                int j;
                int top=s.top();
                s.pop();
                visited[top]=true;
                for(j=0;j<n;j++)
                {
                    if(top==j)
                        continue;
                    if(visited[j]==false&&isConnected[top][j])
                        s.push(j);
                }
            }
        }
        return count;
    }
};