class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        map<long long int,long long int>m;
        int i;
        int max=INT_MIN;
        for(i=0;i<nums.size();i++)
        {
            //nums[i]=nums[i]*nums[i];
            if(nums[i]<0)
            {
                nums[i]=nums[i]*-1;
                if(nums[i]>max)
                    max=nums[i];
            }
            else 
            {
                if(nums[i]>max)
                {
                    max=nums[i];
                }
            }
            m[nums[i]]++;
        }
        int j=0;
        for(i=0;i<=max;i++)
        {
            if(m[i])
            {
                int val=m[i];
                while(val)
                {
                    nums[j]=i;
                    j++;
                    val--;
                }
            }
        }
        for(i=0;i<nums.size();i++)
        {
            nums[i]=nums[i]*nums[i];
            //m[nums[i]]++;
            //cout<<nums[i]<<endl;
        }
        return(nums);
    }
};