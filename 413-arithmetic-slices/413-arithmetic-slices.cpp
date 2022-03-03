class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int ans=0;
        if(nums.size()<3)
            return 0;
        else 
        {
            int i,j;
            int n=nums.size();
            for(i=0;i<n-1;i++)
            {
                int d=nums[i+1]-nums[i];
                int cnt=2;
                //cout<<d<<endl;
                int flag=0;
                for(j=i+2;j<n;j++)
                {
                    if(nums[j]-nums[j-1]!=d)
                    { 
                        if(cnt>2)
                        {
                            ans=ans+cnt-2;
                        }
                        flag=1;
                        break;
                    }
                    else 
                        cnt++;
                }
                if(flag==0&&cnt>2)
                {
                    //cout<<cnt<<endl;
                    int num=cnt-2;
                    ans=ans+num;
                }
            }
        }
        return ans;
    }
};