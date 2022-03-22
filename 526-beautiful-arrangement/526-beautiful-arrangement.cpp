class Solution {
public:
    int size=0,count=0;
    void solve(int n,vector<int>vis){
        if(size==n){
            count++;
        }
        else {
            for(int i=1;i<=n;i++)
            {
                if(vis[i]==0)
                {
                    int j=size+1;
                    //cout<<i<<" "<<j<<endl;
                    if(i%j==0 || j%i==0)
                    {
                        //cout<<i<<" "<<j<<endl;
                        size++;
                        vis[i]=1;
                        solve(n,vis);
                        vis[i]=0;
                        size--;
                        //solve(n,vis);
                    }
                }
            }
        }
    }
    int countArrangement(int n) {
        vector<int>vis(n+1,0);
        solve(n,vis);
        return count;
    }
};