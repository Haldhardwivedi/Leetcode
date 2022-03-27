class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int count=0;
        int i;
        int n=nums.size();
        i=0;
        while(i<nums.size())
        {
            if(i+1<nums.size())
            {
                if(nums[i]==nums[i+1])
                {
                    //cout<<nums[i]<<" "<<nums[i+1]<<endl;
                    count++;
                    i=i+1;
                }
                else
                i=i+2;
            }
            else{
                count++;
                i=i+2;
            }
        }
        return count;
    }
};