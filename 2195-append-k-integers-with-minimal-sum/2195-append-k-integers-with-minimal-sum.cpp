class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
        int n=nums.size();
        int i;
        long long int j=1;
        long long int sum=0;
        sort(nums.begin(),nums.end());
        for(i=0;i<n;i++)
        {
            if(k==0)
                break;
            else if(j==nums[i])
                j++;
            else if(j>nums[i])
            {
                continue;
            }
            else
            {
                long long int d=nums[i]-j;
                if(k-d>=0)
                {
                    k=k-d;
                    long long int v1=2*j+d-1;
                    sum+=(v1*d)/2;
                    j=nums[i]+1;
                }
                else 
                {
                    long long int v1=2*j+k-1;
                    sum+=(v1*k)/2;
                    k=0;
                    break;
                }
            }
        }
        j=nums[n-1]+1;
        if(k!=0)
        {
            long long int v1=2*j+k-1;
            sum+=(v1*k)/2;
        }
        return sum;
    }
};