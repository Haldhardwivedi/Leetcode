/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long long int left=1;
        long long int right=n;
        while(left<=right)
        {
            long long int mid=(left+right)/2;
            int val=guess(mid);
            if(val==0)
            {
                return(mid);
            }
            else if(val==1)
            {
                left=mid+1;
            }
            else 
                right=mid-1;
        }
        return(-1);
        
    }
};