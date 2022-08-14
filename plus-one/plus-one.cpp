class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i;
        int c=1;
        for(i=digits.size()-1;i>=0;i--)
        {
            c=c+digits[i];
            digits[i]=c%10;
            c=c/10;
        }
        if(c!=0)
        {
            reverse(digits.begin(),digits.end());
            digits.push_back(c);
            reverse(digits.begin(),digits.end());
        }
        return digits;
    }
};