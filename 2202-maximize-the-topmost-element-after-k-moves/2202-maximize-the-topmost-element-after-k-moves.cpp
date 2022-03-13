class Solution {
public:
    int maximumTop(vector<int>& nums, int k) {
        int i,n=nums.size();
        if(n==1&&k==0)
        {
            return nums[0];
        }
        else if(n==1&&k==1)
            return -1;
        else if(n==1)
        {
            if(k%2)
                return -1;
            else
                return nums[0];
        }
        else if(n>=k)
        {
            int max=INT_MIN;
            for(i=0;i<=k-2;i++)
            {
                if(nums[i]>max)
                    max=nums[i];
            }
            //cout<<nums[k-1]<<endl;
            if(k<n&&max<nums[k])
            {
                max=nums[k];
            }
            if(max==INT_MIN)
                return -1;
            else 
                return max;
        }
        else if(k>n) 
        {
           int ans=*max_element(nums.begin(),nums.end());
            // k=k%n;
            // if(k%2)
            //     return -1;
            // else 
            return ans;
        }
        return -1;
    }
};