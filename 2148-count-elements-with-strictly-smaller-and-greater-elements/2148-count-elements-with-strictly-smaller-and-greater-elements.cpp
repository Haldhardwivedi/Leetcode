class Solution {
public:
    int countElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int left=0;
        int right=nums.size()-1;
        while(left<nums.size()&&nums[left]==nums[0])
            left++;
        while(right>=0&&nums[right]==nums[nums.size()-1])
            right--;
        // cout<<right-left+1<<endl;
        if(right>=left)
        return(right-left+1);
        else 
            return 0;
    }
};