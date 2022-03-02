class Solution {
public:
    bool isSubsequence(string s, string t) {
        int left=0;
        int i=0;
        while(i<t.size()&&left<s.size())
        {
            if(t[i]==s[left])
            {
                left++;
            }
            i++;
        }
        if(left!=s.size())
        {
            return false;
        }
        return true;
    }
};