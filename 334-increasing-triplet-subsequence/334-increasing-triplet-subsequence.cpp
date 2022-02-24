class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first=INT_MAX,second=INT_MAX;
        int i;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]<first)
                first=nums[i];
            else if(nums[i]<second&&nums[i]>first)
                second=nums[i];
            else if(nums[i]>second)
                return true;
        }
        return false;
    }
};