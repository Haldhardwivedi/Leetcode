class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum=0;
        int i;
        int n=cardPoints.size();
        for(i=0;i<n;i++)
        {
            sum+=cardPoints[i];
        }
        int s1=0;
        for(i=0;i<n-k;i++)
            s1+=cardPoints[i];
        //cout<<sum<<endl;
        int ans=sum-s1;
        int left=0;
        int right=n-k;
        //cout<<n<<" "<<k<<endl;
        while(right<=n)
        {
            if(sum-s1>ans)
                ans=sum-s1;
            if(right==n||left==n)
                break;
            s1=s1-cardPoints[left];
            left++;
            s1+=cardPoints[right];
            right++;
        }
        return ans;
    }
};