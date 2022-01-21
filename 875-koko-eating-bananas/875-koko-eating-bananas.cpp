class Solution {
public:
    int check (vector<int>piles,int h,int k)
    {
        int count=0;
        int i;
        for(i=0;i<piles.size();i++)
        {
            if(piles[i]%k==0)
                count=count+piles[i]/k;
            else 
                count+=piles[i]/k+1;
        }
        if(count<=h)
            return 1;
        else 
            return 0;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        int left=0;
        int right=piles.size()-1;
        while(left<=right)
        {
            int mid=left+(right-left)/2;
            if(check(piles,h,piles[mid])==0)
            {
                left=mid+1;
            }
            else 
                right=mid-1;
        }
        //cout<<left<<endl;
        // if(left>=1&&left<piles[left-1])
        // {
        //     left=piles[left-1];
        // }
        right=piles[left];
        left=1;
        //cout<<left<<" "<<right<<endl;
        while(left<=right)
        {
                int mid=left+(right-left)/2;
                if(check(piles,h,mid)==0)
                {
                    left=mid+1;
                }
                else 
                    right=mid-1;
        }
        return(left);
    }
};