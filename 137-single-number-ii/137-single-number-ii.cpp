class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<long long int,long long int>m;
        int i;
        for(i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(i=0;i<nums.size();i++)
        {
            if(m[nums[i]]!=3)
                return(nums[i]);
        }
        return(-1);
    }
};