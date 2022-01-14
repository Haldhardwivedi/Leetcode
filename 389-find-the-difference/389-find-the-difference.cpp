class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char,int>m1,m2;
        int i;
        for(i=0;i<s.size();i++)
        {
            m1[s[i]]++;
        }
        for(i=0;i<t.size();i++)
        {
            m2[t[i]]++;
        }
        for(i=0;i<t.size();i++)
        {
            if(m1[t[i]]!=m2[t[i]])
                return(t[i]);
        }
        return('-1');
    }
};