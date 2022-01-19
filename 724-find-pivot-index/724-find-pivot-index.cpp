class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int i;
        int n=nums.size();
        int sum=0;
        for(i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        int sum1=0;
        i=0;
        while(i<n)
        {
            int sum2=sum-sum1-nums[i];
            if(sum1==sum2)
                return(i);
            sum1=sum1+nums[i];
            i++;
        }
        return(-1);
    }
};