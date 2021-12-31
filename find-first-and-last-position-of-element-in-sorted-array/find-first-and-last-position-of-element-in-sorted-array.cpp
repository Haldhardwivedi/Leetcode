class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        int ans=-1;
        while(left<=right)
        {
            int mid=(left+right)/2;
            if(nums[mid]==target)
            {
                ans=mid;
                break;
            }
            else if(nums[mid]>target)
            {
                right=mid-1;
            }
            else
                left=mid+1;
        }
        if(ans==-1)
        {
            vector<int>v={-1,-1};
            return(v);
        }
        else 
        {
            left=ans;
            right=ans;
            while(left>=0&&nums[left]==nums[ans])
                left--;
            while(right<nums.size()&&nums[right]==nums[ans])
                right++;
            vector<int>v={left+1,right-1};
            return(v);
        }
    }
};