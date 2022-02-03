class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int i;
        int r=0,w=0,b=0;
        for(i=0;i<n;i++)
        {
            if(nums[i]==0)
                r++;
            else if(nums[i]==1)
                w++;
            else 
                b++;
        }
        i=0;
        //cout<<r<<" "<<w<<" "<<b<<endl;
        while(i<n)
        {
            if(i<r)
                nums[i]=0;
            else if(i>=r&&i<r+w)
                nums[i]=1;
            else 
                nums[i]=2;
            i++;
        }
    }
};