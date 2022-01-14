class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i;
        map<int,int>m;
        for(i=0;i<nums.size();i++)
            m[nums[i]]++;
        for(i=0;i<nums.size();i++)
        {
            if(m[nums[i]]!=2)
                return(nums[i]);
        }
        return(-1);
    }
};