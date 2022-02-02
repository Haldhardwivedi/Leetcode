class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int i,n=nums.size();
        int prefix[n+1];
        int suffix[n+1];
        prefix[0]=nums[0];
        suffix[n-1]=nums[n-1];
        for(i=1;i<n;i++)
        {
            prefix[i]=prefix[i-1]*nums[i];
            suffix[n-i-1]=suffix[n-i]*nums[n-i-1];
        }
        vector<int>ans;
        for(i=0;i<n;i++)
        {
            int left;
            int right;
            if(i-1>=0)
            {
                left=prefix[i-1];
            }
            if(i+1<n)
                right=suffix[i+1];
            if(i>=1&&i<=n-2)
                ans.push_back(left*right);
            else if(i-1>=0)
                ans.push_back(left);
            else
                ans.push_back(right);
        }
        // for(i=0;i<n;i++)
        // {
        //     cout<<prefix[i]<<" ";
        // }
        // cout<<endl;
        // for(i=0;i<n;i++)
        // {
        //     cout<<suffix[i]<<" ";
        // }
        //cout<<endl;
        return ans;
    }
};