class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i,n=nums.size(),sum=0;
        // for(i=0;i<n;i++)
        //     sum+=nums[i];
        // int ans=(n*(n+1))/2-sum;
        // if(ans<0)
        //     return n;
        // else 
        //     return n-ans;
        sort(nums.begin(),nums.end());
        for(i=1;i<n;i++)
        {
            if(nums[i]==nums[i-1])
                return nums[i];
        }
        return 0;
    }
};