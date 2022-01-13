class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        int n=nums.size();
        long long int sum =0;
        vector<long long int >psum;
        map<long long int ,long long int>m;
        psum.push_back(0);
        int i;
        for(i=0;i<n;i++)
        {
            sum+=nums[i];
            psum.push_back(sum);
        }
        for(i=n;i>=0;i--)
        {
            long long int val=k+psum[i];
            count=count+m[val];
            m[psum[i]]++;
        }
        return count;
    }
};