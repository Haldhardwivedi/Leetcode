class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        int i=0;
        sort(nums.begin(),nums.end());
        while(i<nums.size())
        {
            if(i+1<nums.size()&&nums[i]==nums[i+1])
            {
                ans.push_back(nums[i+1]);
                i=i+2;
            }
            else 
                i++;
        }
        return ans;
    }
};