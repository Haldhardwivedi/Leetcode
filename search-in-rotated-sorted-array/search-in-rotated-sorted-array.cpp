class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        while(left<=right)
        {
            int mid=(left+right)/2;
            if(nums[mid]>=nums[0])
                left=mid+1;
            else 
                right=mid-1;
        }
        //cout<<left<<" "<<right<<endl;
        int l1=0;
        int l2=left-1;
        int l3=left;
        int l4=nums.size()-1;
        int ans=-1;
        while(l1<=l2)
        {
            int mid=(l1+l2)/2;
            if(nums[mid]==target)
            {
                ans=mid;
                break;
            }
            else if(nums[mid]>target)
            {
                l2=mid-1;
            }
            else 
                l1=mid+1;
        }
        if(ans!=-1)
            return(ans);
        else
        {
            while(l3<=l4)
            {
                int mid=(l3+l4)/2;
                if(nums[mid]==target)
                {
                    ans=mid;
                    break;
                }
                else if(nums[mid]>target)
                {
                    l4=mid-1;
                }
                else 
                    l3=mid+1;
            }
            if(ans!=-1)
                return(ans);
        }
        return -1;
    }
};