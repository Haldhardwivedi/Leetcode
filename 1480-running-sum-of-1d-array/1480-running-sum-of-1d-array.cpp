class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int i;
        vector<int>psum;
        int n=nums.size();
        int sum=0;
        for(i=0;i<n;i++)
        {
            sum+=nums[i];
            psum.push_back(sum);
        }
        return(psum);
    }
};