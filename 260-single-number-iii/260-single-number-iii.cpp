class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int,int>m;
        int i;
        vector<int>ans;
        for(i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(i=0;i<nums.size();i++)
        {
            if(m[nums[i]]==1)
            {
                ans.push_back(nums[i]);
            }
        }
        return(ans);
    }
};