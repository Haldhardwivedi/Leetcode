class Solution {
public:
    int dp[301];
    bool solution(string s,int left,map<string,int>m)
    {
        string s1;
        int i;
        if(dp[left]!=-1)
            return dp[left];
        for(i=left;i<s.size();i++)
        {
            s1.push_back(s[i]);
            //cout<<s1<<endl;
            if(m[s1])
            {
                //cout<<s1<<endl;
                bool ans=(solution(s,i+1,m));
                if(ans)
                {
                    dp[left]=1;
                    return(true);
                }
            }
            //cout<<s1<<endl;
        }
        dp[left]=m[s1];
        if(m[s1])
            return(true);
        else 
            return false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        map<string,int>m;
        int i;
        for(i=0;i<wordDict.size();i++)
        {
            m[wordDict[i]]++;
        }
        memset(dp,-1,sizeof(dp));
        return(solution(s,0,m));
    }
};