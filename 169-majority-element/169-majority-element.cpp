class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>m;
        int i;
        int n=nums.size();
        for(i=0;i<n;i++)
        {
            m[nums[i]]++;
        }
        for(i=0;i<n;i++)
        {
            if(m[nums[i]]>n/2)
                return(nums[i]);
        }
        return(-1);
    }
};