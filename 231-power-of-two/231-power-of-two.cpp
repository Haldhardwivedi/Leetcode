class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)
            return(false);
        int b=log2(n);
        int num=1<<b;
        if(num==n)
            return(true);
        else 
            return(false);
    }
};