// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left=1;
        int right=n;
        while(left<=right)
        {
            unsigned long long int mid=(right-left);
            mid=mid/2+left;
            if(isBadVersion(mid)==1)
            {
                right=mid-1;
            }
            else 
                left=mid+1;
        }
        return(left);
    }
};